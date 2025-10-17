#include<stdio.h>
struct car
{
	int regno;
	char type;
} c1;
int main()
{
	struct car c1;
	void fun();
}
void fun()
{
	scanf("%d%c",&c1.regno,&c1.type);
	printf("%d%c",c1.regno,c1.type);
}
