#include<stdio.h>
int main()
{
	int num,age;
	char name;
	printf("Please enter your name:");
	scanf("%s",&name);
	printf("Please enter your age");
	scanf("%d",&age);
	printf("Please enter your Contact no:");
	scanf("%d",&num);
	printf(age,name,num);
	return 0;
}
