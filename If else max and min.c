#include<stdio.h>
int main() {
   int a, b, c, d, max, min;
   printf("Enter the values of a, b, c, d");
   scanf("%d%d%d%d", &a, &b, &c, &d);
   max=min=0;
   if(a<b&&a<c&&a<d) {
   min=a;
   } 
   else if(b<a&&b<c&&b<d) {
   min=b;
   } 
   else if(c<a&&c<b&&c<d) {
   min=c;
   } 
   else {
   min=d;
   } 
   
   // find max
   
    if(a>b&&a>c&&a>d) {
   max=a;
   } 
   else if(b>a&&b>c&&b>d) {
   max=b;
   }
   else if(c>a&&c>b&&c>d) {
     max=c;
     }
     else{
     max=d;
     } 
   printf("max=%d  Min=%d", max, min); 
   return 0 ;
   } 
   