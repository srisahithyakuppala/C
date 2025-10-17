#include<stdio.h>
int main()
{
	int n,rev=0,palindrome;
	printf("enter the value n=");
	scanf("%d",&n);
	palindrome=n;
	while(n!=10)
	{
		rev=n%10;
		rev=rev*10+n;
		n=n/10;
	}
	if (palindrome == rev)
	{
		printf("%d is palindrome number\n",palindrome);
	}
	else
	{
		printf("%d is not palindrome number\n",palindrome);
	}
}
