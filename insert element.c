#include<stdio.h>
int main()
{
	int array[100];
	int i,n,x,pos;
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
	}
	printf("input array element are:\n");
	for(i=0;i<n;i++)
	{
		printf("\nenter new elements to be inserted :");
		scanf("%d",&pos);
		n=n+1;
		for(i=n-1;i>=pos;i--)
        array[i]=array[i-1];
        array[pos-1]=x;
        for(i=0;i<n;i++)
        {
        	printf("%d",array[i]);
		}
	
	}
}
