#include<stdio.h>
int main()
{
	int n,res;
	printf("enter the n value:");
	scanf("%d",&n);
	res=fact(n);
	printf("the result is %d",res);
}
fact(int n)
{
	int res;
	if(n==0)
{
		res=1;
}
else
{
	res=n*fact(n-1);
}
printf("the result is %d",res);
}
