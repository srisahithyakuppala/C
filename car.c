#include<stdio.h>
struct car
{
	int c_name[10];
};
struct reg
{
	int r_no;
	char type[10];
	struct car c1;
};
int main()
{
	struct reg r1;
	scanf("%d %s",&r1.r_no.c_no&r1.c1.c_name);
	scanf("%d %s",&r1.r_no,&r1.type);
	printf("this data is outer structure");
	printf("%d %s",r1.c1.c_no,r1.c1.c_name);
	printf("this data is inner structure");
}
