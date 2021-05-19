#include<stdio.h>

int main()
{
	FILE* fp;
	char c = 0;
	fp = fopen(__FILE__,"r");
	if(fp == NULL)
	{
		printf("File not opening");
		return 0;
	}
//	do{
	while(c!=EOF)
	{
		c = fgetc(fp);
		putchar(c);
	}
//	}while (c != EOF);

	fclose(fp);
}
