#include<stdio.h>
int main() {
  int a[100],i,min,max, n;
  for(i=0;i<10;i++) {
  printf("enter the value");
  scanf("%d", &a[i]);}
  max=-5;
  min=9999;
  for(i=0;i<10;i++){
  if(a[i]>max){
  max=a[i];
  }
  if(a[i]<min){
  min=a[i];
  }
  }
  printf("max=%d\n min=%d", max,min);
  return 0;
  }