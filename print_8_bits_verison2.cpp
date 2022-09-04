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
using std::string;
using std::cout;
using std::endl;

/************************************************************************************
                            FUNCTION PROTOTYPES
*************************************************************************************/
string generate_binary_string(int decimal);
string convert_bin_hex(string binary);
void print_binary(string binary);
void print_hex(string hex);
/************************************************************************************
 *                                  MAIN
*************************************************************************************/
int main()
{
    cout <<"-------------------------------------------------"<<endl;
    cout<<"Decimal:\tBinary:\t\tHexadecimal:\t"<<endl;
    cout <<"-------------------------------------------------"<<endl;
    for (int i = 0;i<256;i++)
        {
        //Do conversions
        string binary = generate_binary_string(i);
        string hex = convert_bin_hex(binary);

        //Print Results. This one was single line before I was required to add print functions?
        cout << i << ":\t\t";
        print_binary(binary);
        cout<< ":\t" << ":";
        print_hex(hex);
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
string convert_bin_hex(string binary)
{
    string hex ="";
    string bin1 ="";
    string bin2 ="";
    for (int i = 0; i <= 3; i++)
    {
        bin1 = bin1 + binary[i];
        bin2 = bin2 + binary[i+4];
    }
    for (int i = 0; i <= 3; i++)
    {
        bin1 = bin1 + binary[i];
        bin2 = bin2 + binary[i+4];
    }

    for (int i = 0; i <= 7; i++)
    {
        
        if (i < 4){
            if (binary[i] == 1{

            }
        }
    }


//    if   (bin1 == "0000"){hex = "0";}
//    else if (bin1 == "0001"){hex = "1";}
//    else if (bin1 == "0010"){hex = "2";}
//    else if (bin1 == "0011"){hex = "3";}
//    else if (bin1 == "0100"){hex = "4";}
//    else if (bin1 == "0101"){hex = "5";}
//    else if (bin1 == "0110"){hex = "6";}
//    else if (bin1 == "0111"){hex = "7";}
//    else if (bin1 == "1000"){hex = "8";}
//    else if (bin1 == "1001"){hex = "9";}
//    else if (bin1 == "1010"){hex = "A";}
//    else if (bin1 == "1011"){hex = "B";}
//    else if (bin1 == "1100"){hex = "C";}
//    else if (bin1 == "1101"){hex = "D";}
//    else if (bin1 == "1110"){hex = "E";}
//    else if (bin1 == "1111"){hex = "F";}

//    if (bin2 == "0000"){hex = hex + "0";}
//    else if (bin2 == "0001"){hex = hex + "1";}
//    else if (bin2 == "0010"){hex = hex + "2";}
//    else if (bin2 == "0011"){hex = hex + "3";}
//    else if (bin2 == "0100"){hex = hex + "4";}
//    else if (bin2 == "0101"){hex = hex + "5";}
//    else if (bin2 == "0110"){hex = hex + "6";}
//    else if (bin2 == "0111"){hex = hex + "7";}
//    else if (bin2 == "1000"){hex = hex + "8";}
//    else if (bin2 == "1001"){hex = hex + "9";}
//    else if (bin2 == "1010"){hex = hex + "A";}
//    else if (bin2 == "1011"){hex = hex + "B";}
//    else if (bin2 == "1100"){hex = hex + "C";}
//    else if (bin2 == "1101"){hex = hex + "D";}
//    else if (bin2 == "1110"){hex = hex + "E";}
//    else if (bin2 == "1111"){hex = hex + "F";}

return hex;

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
void print_hex(string hex)
{
//Professor this entire function didn't seem like it needed to be here. However, i did it because it was required in the instructions. 
cout<<hex;
}
