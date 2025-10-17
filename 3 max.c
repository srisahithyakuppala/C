#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b&&a<c)
	printf("\na is maximum");
	if(b>a&&b>c)
	printf("\nb is maximum");
	if(c>a&&c>b)
	printf("\nc is maximum");
	else
	printf("all are equal");
}
