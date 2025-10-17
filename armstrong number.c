#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(n==sum)
	{
		printf("armstrong number:");
	}
	else
	{
		printf("not armstrong number:");
	}
	return 0;
}
