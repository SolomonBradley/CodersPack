#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int a=1;
printf("Multiplication table of %d",n);
while(a<=10){
	printf("%d*%d=%d\n",n,a,n*a);
	a=a+1;
}
return 0;
}

