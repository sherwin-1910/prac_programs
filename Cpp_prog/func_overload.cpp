//func_overload.cpp
#include<iostream>
using namespace std;

void fun(char a)
{
	cout << "the value in fun 1 is " << a << endl;
}
void fun(float b,int m)
{
//	c = 10;
	int c = 10;
	cout << "the value in fun 2 is " << b << " " << c <<  endl;	
}
int main()
{	
	fun(65);
	fun(float(2.5));
}