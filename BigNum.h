#ifndef BIGNUM_H
#define BIGNUM_H
#include<string>
#include<iostream>
using namespace std;
class BigNum{
private:
	string a;
	string b;
public:
	void pluss(string a,string b);
	
	void subc(string a,string b);
	
	void multi(string a,string b);
	
};
#endif


