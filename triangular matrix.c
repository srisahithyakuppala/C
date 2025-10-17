#include<stdio.h>
int main() {
	int n,i,j;
	printf("enter the size of the matrix(n):");
	scanf("%d",&n);
	int matrix[n][n];
	printf("Emter the size of the matrix(n):");
	scanf("%d",&n);
	
	printf("Enter the elements of the matrix:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(n>=i)
			{
				scanf("%d",matrix[i][j]);
			} else {
				matrix[i][j]=0;
			}
		}
	}
	printf("\n lower triangular matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
}
