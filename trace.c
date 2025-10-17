#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],i,j,trace;
	printf("matrix A:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<2;j++)
	{
		printf("%d",a[i][j]);
	printf("\n");
    }
    trace =a[0][0]+a[1][1];
    printf("trace=%d",trace);
}
