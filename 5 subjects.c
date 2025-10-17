#include<stdio.h>
int main()
{
    int a,b,c,d,e,t;
	float avg;
	printf ("enter the values of a,b,c,d,e\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	t=a+b+c+d+e;
	avg=a+b+c+d+e/5.0;
	   
	printf("total marks are %d\n",t);
	printf("avg marks are %2f\n",avg);
}
