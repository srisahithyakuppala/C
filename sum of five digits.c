#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
	scanf("%d",&n);
	int sum=0;
	while(n!=0);
	{
		int r=n%10;
		n=n/10;
		sum=sum+r;
	}
	printf("%d",sum);
	return 0;
}
