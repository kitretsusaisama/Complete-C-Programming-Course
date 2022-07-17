#include<stdio.h>
void main(){
    int i,num,sof;
    printf("Enter your num \n");
    scanf("%d",&num);
    i=1,sof=0;
    myl:
    if (num%i==0)
    {
        sof=sof+i;
        i++;
    }
    if (i<=num)
    goto myl;
    
    printf("The sum of all factors of %d is %d",num,sof);
}