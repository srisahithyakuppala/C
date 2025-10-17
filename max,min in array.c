#include<stdio.h>
int main()
{
	int arr[100];
	int i, mx, mn, n;
	printf("input the number of elements to be stored in array:");
	scanf("%d",&n);
	printf("input %d element in array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("elements %d:",i);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
    {
    	if(arr[i]>mx)
    	{
    		mx=arr[i];
		}
		if(arr[i]<mn)
		{
			mn=arr[i];
		}
	}
	printf("maximum element is %d\n",mx);
	printf("minimum element is %d\n",mn);
	return 0;
}
