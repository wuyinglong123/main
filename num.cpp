#include <iostream>
#include<string>
#include<vector>
#include<iterator>
#include"BigNum.h"

using namespace std;
int main()
{
    BigNum number;
    string x,y;
    cout<<"请输入第一个数:";
    cin>>x;
    cout<<"请输入第二个数:";
    cin>>y;
    cout<<"加法:"<<x<<"+"<<y<<"=";
    number.pluss(x,y);
    cout<<"减法:"<<x<<"-"<<y<<"=";
    number.subc(x,y);
    cout<<"乘法:"<<x<<"*"<<y<<"=";
    number.multi(x,y);
    return 0;
}
