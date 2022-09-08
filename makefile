All: run clean

run: print_8_bits_verison2.cpp
	g++ -std=c++11 -o run print_8_bits_verison2.cpp && ./run
clean:
	rm run 
