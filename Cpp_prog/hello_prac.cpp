#include<iostream>
using namespace std;

void nprint()
{
	const int i= 5;
	const int* p = NULL;
	p = &i;
	cout << "I: " << i << " *p: " << *p << endl;
//	i++;
	cout << "I: " << i << " *p: " << *p << endl;
//	(*p)++;
	cout << "I: " << i << " *p: " << *p << endl;

//	char strarray[] = "Hello";
	char* str = "hello";
	cout << str;
	str[0] = 'n';
	cout << str;

}
int main()
{
	nprint();
}
