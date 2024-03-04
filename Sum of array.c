#include<stdio.h>
int main() {
  int a[100],i,sum=0, j;
  for(i=0, j=1;i<10;i++, j++) {
  printf("enter the value %d  :", j);
  scanf("%d", &a[i]);
  }
  for(i=0;i<10;i++){
  sum=sum+a[i];
  }
  printf("sum=%d", sum);
  return 0;
  }
  