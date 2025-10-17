#include<stdio.h>
int main()
{
	int a[100],n,i,key,count=0,search;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search element: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
		printf("%d element is located at %d.\n",search,i+1);
		count++;
		}
	
	    else printf("Not found\n");
	}
	
	if(count!=0)
	{
		printf("%d is present %d times in the array.\n",search,count);
	}
	else printf("%d is not found.\n",search);
}
