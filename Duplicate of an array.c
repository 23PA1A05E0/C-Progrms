#include<stdio.h>
int main () {
int size, a[100],i,j,k;
printf("enter the size of an array");
scanf("%d", &size);
printf("enter %d elements ", size);
for(i=0;i<size;i++){
scanf("%d", &a[i] );

}
for(i=0;i<size;i++){
   for(j=i+1;j<size;j++){
   if(a[i] ==a[j]) {
   for(k=j;k<size;k++) {
   a[k] =a[k+1];
   }
   size--;
   j--;
 }
  }
 }
   printf("the elements after removing duplicate\n");
   for(i=0;i<size;i++){
   printf("%d\n",a[i] );
   } 
   return 0;
   
   }
   