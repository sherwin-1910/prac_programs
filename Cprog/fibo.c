#include<stdio.h>

unsigned char withRecursion(unsigned char n)
{
	if 
}
unsigned char woRecursion(unsigned char n)
{

}
int main()
{
	unsigned char choice = 0;
	unsigned char num = 0;
	printf("1. Fibo with recursion\n");
	printf("2. Fibo without recursion\n");
	printf("Enter Choice : ");
	scanf("%d",&choice);
	do
	{
		switch(choice)
		{
			case 1: 
				printf("Enter series number; ");
				scanf("%d",&num);
				printf("0\t 1\t");
				withRecursion(num);
				break;
			case 2:
				printf("Enter series number; ");
				scanf("%d",&num);
				woRecursion(num);
				break;
			case 'q':
				break;
			default:
				printf("By default");
		}
	}while(choice != 'q');
}