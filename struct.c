#include<stdio.h>
struct book{
	char name[10];
	int subject;
};
int main()
{
	struct book book1;
	printf("enter name:");
	scanf("%s",&book1.name);
	printf("enter subject:");
	scanf("%d",&book1.subject);
	printf(" \n book details:\n ");
	printf("name:%s\n",book1.name);
	printf("subject:%d\n",book1.subject);
	
}
