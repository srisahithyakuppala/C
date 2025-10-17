#include<stdio.h>
int main()
{
	int array[100],n,c,d,swap;
	printf("enter the number of elements");
	scanf("%d",&c);
	printf("enter %d integer\n",n);
	for(c=0, c<n, n - 1, c++)
	scanf("%d",&array[c]);
	for(c=0; c< n - 1; c++)
	{
		for(d=0; d < n - c -1;d++)
		{
			if(array[d] > array[d-1])
			{
				swap      =array[d]
				array[d]  =array[d-1];
				array[d-1]=swap;
			}
			printf("enter list in ascending order\n");
			scanf("%d",d,d-1,swap);
		}
	}
return 0;	
}
