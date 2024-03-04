#include<stdio.h>

int main()
{
int n, j, i, t=1;
 int f=1;
printf("enter the number :");
scanf("%d",&n);
for (i=n;i>=1;i--) {
    for(j=1;j<=i;j++){ 
    printf("*", t++);} 
    printf("\n");} 

}
    