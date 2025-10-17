#include<stdio.h>
int main(int argc,char *argv[]){
	printf("Name of the program: %s\t",argv[0]);
	if(argc==2){
		printf("\nValue given by user is: %s\t",argv[1]);
	}
	else if(argc>2){
		printf("\nMany values given by users.\n");
	}
	else {
		printf("\nSingle value expected.\n");
	}
}
