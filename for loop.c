#include<stdio.h>
int main()
{
    int n,i,flag=0;
	printf("enter a is positive integer:");
	scanf("%d",&n);
	//0 and 1 are not prime numbers
	//change flag to 1 for non prime number
	if(n==0||n==1)
	flag=1;
	for(i=2;i<=n/2;++i){
		flag=1;
		break;
}
}
  //flag is 0 for prime numbers
if(flag==0)
    printf("%d is a prime number.",n);
else
    printf("%d is non prime number.",n);
    return 0;
}
