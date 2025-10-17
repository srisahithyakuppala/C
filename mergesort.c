#include<stdio.h>
void merge(int a[],int lb,int ub){
	int b[ub-lb-1];
	int i=lb;
	int j=mid+1;
	int k=0;
	while (i<=mid && j<=ub) {
		if(a[j]<a[i])
		{
			b[k]=a[i];
			i++;
		}
		else
		b[k]=a[j];
		j++
	}
	k++;
}
while(i<=mid){
	b[k]=a[i];
	i++;
	k++;
}
while(j<=ub)
{
	b[k]=a[j];
	j++;
	k++;	
}
for(k=0;k<=ub-lb+;k++)
{
	a[lb=k]=b[k];
}
}
{
	int i;
	if(b>ub)
	{
		int mid=lb+(ub-lb)/2;
		mergesort(a,mid+1,ub);
		merge()
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	for(i=0;i<n;i++){
	}
	printf("\n";)
}
