#include<stdio.h>

int main()
{
    int  a, b, c, d, max, min;
    printf("enter the values of a, b, c, d");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max=min=a;
    if(max<b) {
    max=b;} 
    if (min>b) {
    min=b;} 
    if(max<c) {
    max=c;} 
    if(min>c) {
    min=c;} 
    if (max<d) {
    max=d;} 
    if(min>d) {
    min =d;} 
    printf("minimum =%d\n", min);
    printf("maximum=%d", max);
    return 0;
}