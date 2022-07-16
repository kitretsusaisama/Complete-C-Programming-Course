/*
Q.WAP to display prime no btw 20 to 50.
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,num,nof;
    printf("Display the prime nums btw 20 to 50.");
    for(num=20;num<=50;num++)
    {
        for (i=1,nof=0;i<=num;i++)
        if(num%i==0)
        nof++;
    }
    if(nof==2)
    printf("%d \n",num);
    getch();
}