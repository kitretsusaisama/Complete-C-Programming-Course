#include <stdio.h>

int main() {
   int i;
    printf("Q.Wap to display all no from 20 to 500,Which are multiple of 5 & 7. \n");
   for(i=20;i<500;i++)
   {
       if((i%5==0)&&(i%7==0))
       printf("%d \t",i);
   }
    printf("\nProgram Terminated\n");
    return 0;
}
