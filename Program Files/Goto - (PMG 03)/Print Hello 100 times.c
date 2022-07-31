#include<stdio.h>
void main(){
    int i;
    printf("Display Hello 100 Time \n");
    i=1;
    myl:
    printf("Hello");
    i=i+1;
    if(i<=100)
    goto myl;
}