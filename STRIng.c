#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the string:");
	scanf("%s%s",&str1,&str2);
	printf("\n%s",str1,str2);
	printf("\n%s",strcmp(str1,str2));
}
