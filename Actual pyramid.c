#include<stdio.h>

int main()
{
int n, j, i, t=1;
 int f=1;
printf("enter the number :");
scanf("%d",&n);
for (i=0;i<n;i++) {
    for(j=0;j<n+i;j++){ 
   if(j<n-i-1)
    printf(" ");
    else
   printf("*");
   } 
   
    //printf("\t");
    printf("\n");} 

}
    