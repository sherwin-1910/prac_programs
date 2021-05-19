#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[10];
	unsigned char age;
};
int main()
{
	unsigned char i = 0;
	struct student *s = NULL;
	s = (struct student*)malloc(3*sizeof(struct student));
	if(!s)
	{
		printf("Malloc couldnt be performed");
		return 1;
	}
	for(i = 0; i < 3; i++)
	{
		printf("Enter Student %d Name: ",i);
		scanf("%s",(s+i)->name);
		printf("Age: ");
		scanf("%d",&(s+i)->age);
	}

	FILE *fptr = NULL;
	fptr = fopen("student.bin","w");
	if(!fptr)
	{
		printf("FIle couldnt be opened");
		return 1;
	}

	for(i = 0; i< 3; i++)
	{
		printf("%d -- %s\t %d\n",i,(s+i)->name,(s+i)->age);
		fwrite((s+i),sizeof(struct student),1,fptr);
	}
	fclose(fptr);

	fptr = fopen("student.bin","r");
	if(!fptr)
	{
		printf("Couldnr be opened to read");
		return 1;
	}

	for(i = 0; i < 3; i++)
	{
		fread((s+i),sizeof(struct student),1,fptr);
		printf("%d -- %s\t %d\n",i,(s+i)->name,(s+i)->age);
	}
	fclose(fptr);

	fptr = fopen("student.bin","r");
	if(!fptr)
	{
		printf("Couldnt be opened to seek");
		return 1;
	}

	fseek(fptr,2*sizeof(struct student),SEEK_SET);

	printf("Record number 3\n");
	fread((s),sizeof(struct student),1,fptr);

	printf(" %s\t %d\n ",(s)->name,(s)->age);
	fclose(fptr);
	free(s);
}