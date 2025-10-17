#include<stdio.h>
struct student
{
     char name[50];
     int marks[3];
     int total;
};
int main(int argc,char*argv[]) {
	int i;		
	return 1;
	if(argc !=5) {
		printf("usage: %s <student name> <mark1> <mark2> <mark3>\n",argv[0]);
	}
	struct student student;
	snprintf(student.name,sizeof(student.name),"%s",argv[1]);
	student.total=0;
	for(i=0;i<2;i++)
	{
		student .marks[i] = atoi(argv[i+2]);
		student .total+=student.marks[i];
	}
	printf("\nstudent details:\n");
	printf("name:%s\n",student.name);
	printf("marks %d ,%d,%d\n",student.marks[0],student. marks[1],student .marks[2]);
	printf("Total marks:%d\n",student.total);
	return 0;
}
