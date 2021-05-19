#include<stdio.h>
void main() {
	char str1[] = "Hello";
	char * p = "Hello", * s, * q;
	p = "Bye";
	printf("%s", p);
	s = p;
	printf("%s", s);
	q = str1;
	printf("\n%s", q);

	char* str = "Hello";
	printf("%s",str);
	str = "New";
//	*str = 'N';
	printf("%s",str);

	int a = 10;
	int* ptr = &a;
	*ptr = 12;
	printf("%d",*ptr);
}