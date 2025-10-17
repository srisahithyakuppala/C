#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int start,end,len;
	start=0;
	len=(n+2)-1;
	end=len-1;
	while (n!=0)
	{
		for(i=start;i<end;i++)
		{
			for(int j=start;j<end;j++)
			{
				if(i==start || i==end || j==start||j==end)
				{
					a[i][j]=n;
				}
			}
		}
		start++i;
		end--;
		n--;
	}
	for(int i=0;i<ten;i++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
}
}
