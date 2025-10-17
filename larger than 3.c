#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	printf("a is larger\n");
	else if((b>a)&&(b>c))
	printf("b is larger\n");
	else
	printf("c is larger\n");
}
