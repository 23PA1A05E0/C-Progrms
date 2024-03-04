#include<stdio.h>
#include<math.h>
int main(){
int n, i=0, sum=0, ream, original;
printf("enter the number");
scanf("%d", &n);
original=n;
while(n!=0){
    n=n/10;
       i++;
} 
printf("%d\n", i);
int temp=original;
for(int j=1;original!=0;j++){
  ream=original%10;
  sum=sum+pow(ream, i);
  original=original/10;
  }
printf("%d\n", sum);
    if(temp==sum) 
    printf("%d is Armstrong ", temp);
    else{
    printf("%d is not Armstrong ", temp );} 
    return 0;
}