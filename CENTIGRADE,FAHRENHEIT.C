#include<stdio.h>
int main()
{
	float centigrade,fahrenheit;
	printf("enter temperature in centigrade\n");
	scanf("%f",&centigrade); 
	fahrenheit = (centigrade*9/5)+32;
	printf("%.2f centigrade is equivalent to %.2f fahrenheit\n", centigrade, fahrenheit);
	return 0;	
}
