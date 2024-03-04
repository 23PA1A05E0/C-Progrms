#include<stdio.h>
int main () {
int n, ream, num=0;
printf ("enter the number") ;
scanf("%d" , &n);
int original=n;
while (n!=0){
ream=n%10;  
num=num*10+ream;  
n=n/10;}
if(original==num) 
printf("it is polyndrome");
else{
printf("not a polyndrome");} 
//printf("the reverse of given number is :%d", num);} 
} 