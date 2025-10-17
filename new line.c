#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("Enter a sentence:");
	fgets(a,size of [a],stdin);
	a[strcpsn(a,"\n")]='\0';
	char * word = strtok(a," ");
	while (word ! =NULL)
	{
		printf("%s\n",word);
		word = str ok(NULL," ");
	}
	return 0;
}
