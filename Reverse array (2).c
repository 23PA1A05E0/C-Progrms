#include<stdio.h>

int main()
{    
     int a[100]={1,2,3,4,5,6}, n=6;
     //printf("enter the no of elements ");
     //scanf("%d", &n);
     printf("reverse  the elements in array\n");
    /* for(int i=0;i<n;i++){
     scanf("%d", &a[i] );} */
     for(int i=n-1, j=0;i>=0;i--,j++){
     
    printf("a[%d] =%d\n",j, a[i] );} 
    return 0;
}