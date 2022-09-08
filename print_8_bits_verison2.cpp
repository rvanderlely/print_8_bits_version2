/*
Name:       Rachel Vanderlerly
Due Date:   September 12 2022
Class:      Network Programming
Profesor:   Dr.Zhao
Assignment: Program 1
Description: This program uses 4 functions and a main function to print out all
possible combinations of 8 bits along with its respective hexidecimal and decimal digit. 
*/ 

#include <iostream>
#include <string>
#include <cmath>
using std::string;
using std::cout;
using std::endl;
using std::to_string;

/************************************************************************************
                            FUNCTION PROTOTYPES
*************************************************************************************/
string generate_binary_string(int decimal);
void convert_bin_hex(string binary, int hex[]);
void print_binary(string binary);
void print_hex(int hex[]);
/************************************************************************************
 *                                  MAIN
*************************************************************************************/
int main()
{
    int decimal_hex[2]={0,0}; //Holds the two hex values in decimal  
    cout <<"-------------------------------------------------"<<endl;
    cout<<"Decimal:\tBinary:\t\tHexadecimal:\t"<<endl;
    cout <<"-------------------------------------------------"<<endl;
    for (int i = 0;i<256;i++)
        {
        //Do conversions
        string binary = generate_binary_string(i);
        convert_bin_hex(binary,decimal_hex);

        //Print Results. This one was single line before I was required to add print functions?
        cout << i << ":\t\t";
        print_binary(binary);
        cout<< ":\t" << ":";
        print_hex(decimal_hex);
        cout<< endl;
        }
    return 0;
}
/************************************************************************************
                    string generate_binary_string(int decimal)
Input: The decimal number you want to change to binary 
Output: Returns a string containing the binary number of the decmial passed in
*************************************************************************************/
string generate_binary_string(int decimal)
{
    string binary_array[8]={"0","0","0","0","0","0","0","0"};
    string binary_string = "";
    int rem;
    int count = 7;
        while (decimal !=0)
        {
            rem = decimal %2;
            if (rem == 0){ binary_array[count] = "0"; }
            else if (rem == 1){binary_array[count] = "1";}
            decimal = (decimal/2);
            count--;
        }
        for (int i = 0; i <8; i++) {binary_string =  binary_string+ binary_array[i] ;}
        return binary_string;
}
/************************************************************************************
                        string convert_bin_hex(string binary)
Input: The binary number you want to change to hexadecimal 
Output: Returns a string containing the hexadecimal number of the binary passed in
*************************************************************************************/  
void convert_bin_hex(string binary, int hex[])
{
    //cout<<"The binary number passed in was"<<binary;
    int decimal1 =0;
    int decimal2 =0;
    string bin1 ="";
    string bin2 ="";
    //Loop through the 8 bits
    for(int i = 7; i >= 0; i--)
    {
        //Loop through the right nibble 0-3
        if(i > 3)
        {
            //If there is a 1 present
            if(binary[i] == '1')
            {
                decimal2 = decimal2 + pow(2, 7-i);
            }
        }
        //Loop through the left nibble 4-7
        else
        {
            //If there is a 1 present
            if(binary[i]=='1')
            {            
                 decimal1 = decimal1 + pow(2, 3-i);
            }
        }
    }
    hex[0]= decimal1;
    hex[1]= decimal2;

}


/************************************************************************************
                    string print_binary(string binary)
Input: The string that needs to be printed
Output: Prints the binary number
*************************************************************************************/
void print_binary(string binary)
{
//Professor this entire function didn't seem like it needed to be here. However, i did it because it was required in the instructions. 
cout<<binary;
}

/************************************************************************************
                    string print_hex(string hex)
Input: The string that needs to be printed
Output: Prints the binary number
*************************************************************************************/
void print_hex(int hex[])
{
   for(int i = 0; i < 2; i++){
        if(hex[i] == 15){
            cout<<("F");
        }
        else if(hex[i] == 14){
            cout<<("E");
        }
        else if(hex[i] == 13){
            cout<<("D");
        }
        else if (hex[i] == 12)
        {
            cout<<("C");
        }
        else if (hex[i] == 11)
        {
            cout<<("B");  
        }
        else if (hex[i] == 10)      
        {
            cout<<("A");
        }
        else{
            cout<<(hex[i]);
        }}
}
