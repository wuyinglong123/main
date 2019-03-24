# this is a make file
num.out:BigNum.o 
	g++ BigNum.o num.cpp
BigNum.o:BigNum.cpp
	g++ -c BigNum.cpp

