#include<stdio.h>
void demo() {
	register int i;
	for(i=0;i<5;i++)
	{
		printf("i=%d\n",i);
	}
}
int main() {
	demo ();
	return 0;	
}
