#include<stdio.h>
struct book{
	char name[10],subject[10];
};
int main()
{
	struct book book1;
	printf("enter name:");
	scanf("%s",&book1.name);
	printf("enter subject:");
	scanf("%s",&book1.subject);
	printf(" \n book details:\n ");
	printf("name:%s\n",book1.name);
	printf("subject:%s\n",book1.subject);
}
