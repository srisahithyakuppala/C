#include<stdio.h>
int main()
{
	int n,res;
	printf("enter n value:");
	scanf("%d",&n);
	res=fact(n);
	printf("\nthe result:%d",res);
}
fact(int n)
{
	int res;
	if(n==0)
	return 1;
	else
	{
		res=n*fact(n-1);//recursion//
	}
	printf("\nthe result is:%d",res);
}
