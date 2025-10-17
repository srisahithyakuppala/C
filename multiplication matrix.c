#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,c[10][10];
	printf("Enter the elements one by one:");
	for(i=0;i<2;i++)
	{
		for(i=0;i<2;i++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<2;j++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
}
  printf("enter the b elements:");
  for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		for (j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
    		printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("required matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j] * b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
