#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the fareheit value");
	scanf("%f,&f");
	c=5*(f-32)/9;
	printf("Celsius value is %f",c);
	return 0;
}
