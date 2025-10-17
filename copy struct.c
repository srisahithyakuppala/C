#include<stdio.h>
struct student
{
	int tot;
	float avg;
};
int main()
{
	struct student s1={100,98,56};
	struct student s2;
	s2=s1;
	printf("%d\n %f",s2.tot,s2.avg);
}
