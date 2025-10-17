#include<stdio.h>
int main()
{
	int sum(int,int);
	int a,b,c;
	printf("enter thenumbers:");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("=%d",c);
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
