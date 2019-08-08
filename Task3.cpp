#include<stdio.h>
int main()
{
	int mark1,mark2,mark3,sum,avg;
	printf("Please enter the marks:");
	scanf("%d",&mark1);
	scanf("%d",&mark2);
	scanf("%d",&mark3);
	sum=mark1+mark2+mark3;
	avg=sum/3;
	printf("The sum is %d \n The average is %d",sum,avg);
	return 0;
	}
