#include<stdio.h>
int main(){
	int a=0,b=1,c;
	printf("%d %d ",a,b);
	printf("%d ",fib());
}
fib(){
	int a=0,b=1,c,i;
	for(i=0;i<5;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
