#include<stdio.h>
int main()
{
	int N;
	printf("enter the values:");
	scanf("%d",&N);
	int i=1;
	do{
	printf("%d x %d\n",N,i,N *i);
	i++;
}
while(i<=10);
return 0;	
}
