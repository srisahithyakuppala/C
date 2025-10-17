#include<stdio.h>
main(){
	FILE *fp;
	char buff[225];
	fp = fopen("filetext.txt","r"); //creating char array to store data 
	while(fscanf(fp,"%s",buff)!=EOF){
		printf("%s",buff);
	}
	fclose(fp);
}
