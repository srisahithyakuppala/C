#include<stdio.h>
void bubblesort(int arr[], int n)
{
	int i,j,temp;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void printArray(int arr[],int n)
{
	int i;
	for( i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {64 ,25 ,42 ,50 ,11 ,14 , 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("\nunsorted array:\n ");
	printArray(arr, n);
	bubblesort(arr, n);
	{
	
	printf("\nsorted array:\n ");
	printArray(arr, n);
}
}
