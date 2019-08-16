#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,k,rows,counter,temp,num;
    printf("Enter number of rows you want: \n");
    scanf("%d",&rows);
    printf("Here your pattern\n");
    counter=1;
    temp=1+(rows-1)*2;
    for(i=1; i<=rows; i++){
       num=1;
    for(j=1; j<=counter; j++)
       {
           printf(" ");
       }
    for(k=temp; k>=1; k--){
        printf("%d", num);
        num++;
       }
       counter++;
        temp=temp-2;
        printf("\n");
       }
        return 0;
    }
