#include<stdio.h>
#include<stdlib.h>
int  main(){
	int *ptr=(int *)malloc(sizeof(int));
	*ptr=15;
	free(ptr);
	printf("%d",*ptr);
}
