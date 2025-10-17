#include<stdio.h>
int main()
{
	double km,m,cm,mm;
	printf("Enter the distance in km:");
	scanf("%lf",km);
	m=km * 1000;
	cm=km*100000;
	mm=km*1000000;
	printf("\n%.2f km is equivalent to:\n",km);
	printf("%.2f m\n",m);
	printf("%.2f cm\n",cm);
	printf("%.2f mm\n",mm);
	return 0;
}
