#include<iostream>
#include<string>
#include<vector>
#include <iterator>
#include<algorithm>
#include"BigNum.h"
using namespace std;

void BigNum::multi(string a,string b)
{
    int i,j,k,m;
	string c1,c2;
	string c3=a+b;
	if(a.at(0)==48||b.at(0)==48) 
	cout<<c3;
	if(a.size()>b.size())
	{
    	    	c1=a;
		c2=b;
	}
	else
	{
		c1=b;
		c2=a;
	}
	reverse(c1.begin(),c1.end());
	reverse(c2.begin(),c2.end());
	for(i=0;i<c2.size();i++)
	{
		if(c2.at(i)>=48&&c2.at(i)<=57) c2.at(i)-=48;
	}
	for(i=0;i<c1.size();i++)
	{
		if(c1.at(i)>=48&&c1.at(i)<=57) c1.at(i)-=48;
	}
	for(i=0;i<c3.size();i++)
            c3.at(i)=0;
  	for(i=0;i<c2.size();i++)
	{
		for(j=0;j<c1.size();j++)
		{
			m=c2.at(i)*c1.at(j);
			c3.at(i+j+1)+=m/10;
			c3.at(i+j)+=m%10;
			for(k=i+j;k<c3.size()-1;k++)
			{
				if(c3.at(k)>=10) 
				{
					c3.at(k+1)+=c3.at(k)/10;
					c3.at(k)=c3.at(k)%10;
				}
				else
					break;
			}
		}
	}
	for(i=c3.size()-1;i>=0;i--)
	{
		if(c3.at(i)>0)
          break;
	}
	c3.erase(i+1,c3.size());
	for(i=0;i<c3.size();i++)
	{
		if(c3.at(i)>=10) c3.at(i)+=87;
		if(c3.at(i)<10) c3.at(i)+=48;
	}
	reverse(c3.begin(),c3.end());
	cout<<c3;
}
void BigNum::pluss(string a,string b)
{
	if(a.size()<b.size())
{
	string t=b;
	b=a;
	a=t;
}
vector<char> a1(a.size());
vector<char> b1(b.size());
copy(a.begin(),a.end(),a1.begin());
copy(b.begin(),b.end(),b1.begin());
for(int i=a.size()-1,j=b.size()-1;i>=0;i--,j--)
{
	a1.at(i)=a1.at(i)+(j>=0?b1.at(j)-'0':0);
	if(a1.at(i)>'9') 
{
	a1.at(i)=a1.at(i)-10;
	if(i!=0) a1.at(i-1)++;
	else a1.insert(a1.begin(),'1');
}
}
for(vector<char>::iterator it=a1.begin();it!=a1.end();it++)
	cout<<*it;
cout<<" "<<endl;
}
void BigNum::subc(string a,string b)
{
	int h=0;
	int m=a.size(),n=b.size();
	if((m<n)||(m==n&&(a.at(1)<b.at(1))))
{
	h++;
	string t=b;
	b=a;
	a=t;
}
vector<char> a1(a.size());
vector<char> b1(b.size());
copy(a.begin(),a.end(),a1.begin());
copy(b.begin(),b.end(),b1.begin());
for(int i=a1.size()-1,j=b1.size()-1;i>=0;i--,j--)
{
	if(j>=0)
	{
		if(a1.at(i)>=b1.at(j))
		a1.at(i)=a1.at(i)-b1.at(j)+'0';
		else
		{
			a1.at(i)=a1.at(i)+'9'+'1'-b1.at(j);
			if(i!=0) a1.at(i-1)--;
			else a1.erase(a1.begin());
		}
	}
}
    int i;
	for(i=0;i<a1.size();i++)
		if(a1.at(i)>48) break;
		if(i==a1.size())
		a1.erase(a1.begin(),a1.begin()+i-1);
		else
		a1.erase(a1.begin(),a1.begin()+i);
		if(h)
		a1.insert(a1.begin(),'-');
	for(vector<char>::iterator it=a1.begin();it!=a1.end();it++)
	cout<<*it;
cout<<" "<<endl;
}
