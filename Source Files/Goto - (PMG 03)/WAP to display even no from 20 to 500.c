#include<stdio.h>
void main(){
    int i;
    printf("Display Even No from 20 to 500 \n");
    i=20;
    myl:
    printf("%d \t",i);
    i=i+2;
    if (i<=500)
    goto myl;
/*
    myl:
    if(i%2==0)
    printf("%d \t",i);
    i++;
    if (i<=500)
    goto myl;
*/

}