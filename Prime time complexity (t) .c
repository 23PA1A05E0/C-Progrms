#include<stdio.h>

int main()
{
  int n, i, f;
  printf("enter a number");
  scanf("%d", &n);
  i=2;
  f=0;
  if(n==1||n==0){
  f=1;
  } 
  while(i<=n/2) {
  if(n%i==0){
  f=1;
  break;}
  i++;} 
  if(f==0)
  printf("it is a prime number");
  else{
    printf("it is not  a prime number");} 
    return 0;
}