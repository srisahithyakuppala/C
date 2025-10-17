#include<stdio.h>
struct student
{
	int tot;
	float avg;
};
int main()
{
	struct student s1;
    printf("\n enter the student data: ");
	scanf("%d %f",&s1.tot,&s1.avg);
	scanf("%d\n %f",s1.tot,s1.avg);
}
