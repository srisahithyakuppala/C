#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		i+(n%i==0);
		count=count+1;
	}
	if(count ==2);
	{
		printf("%d is prime number",n);
	}
	
	{
		printf("%d is non prime number",n);
	}
	
}
