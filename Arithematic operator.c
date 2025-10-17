#include<stdio.h>
int main()
{
	int a,b,x;
	float result;
	printf("enter a,b,x values\n");
	scanf("%d%d%d",&a,&b,&x);
	result=(a*x+b)/(a*x-b);
	printf("\n result=%f",result);
	return 0;
}
