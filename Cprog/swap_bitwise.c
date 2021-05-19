#include<stdio.h>
#include<stdlib.h>
//#define swap(a,b) int temp = a; a = b; b = temp;

int main()
{	
	FILE *fp = NULL;
	int i;
	struct num{
	unsigned char n1,n2,n3;
	};
	struct num n;
	fp = fopen("temp1.bin","w");
	if(fp == NULL)
	{
		printf("File couldnt be opened\n");
		exit(1);
	}
	for(i=1;i<5;i++)
	{
		n.n1 = i;
		n.n2 = (i*5);
		n.n3 = (5*i+1);
		printf("Before writing -- %d -- N1 %d, N2 %d, N3 %d\n",i,n.n1,n.n2,n.n3);
		fwrite(&n,sizeof(struct num),1,fp);
	}
	fclose(fp);
	printf("Writing done\n");

	fp = fopen("temp1.bin","r");
	if(fp == NULL)
	{
		printf("File couldnt be opened\n");
		exit(1);
	}
	fseek(fp,0 + 3*sizeof(struct num),SEEK_SET);
	fread(&n,sizeof(struct num),1,fp);
	printf("AFter writing -- %d -- N1 %d, N2 %d, N3 %d\n",i,n.n1,n.n2,n.n3);

/*	for(i=1;i<5;i++)
	{
		fread(&n,sizeof(struct num),1,fp);
		printf("AFter writing -- %d -- N1 %d, N2 %d, N3 %d\n",i,n.n1,n.n2,n.n3);
	}
*/	fclose(fp);
}