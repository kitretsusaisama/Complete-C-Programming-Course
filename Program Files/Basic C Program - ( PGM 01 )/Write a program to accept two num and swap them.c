#include<stdio.h>
 int main()
 {
   //Using 3rd Variable 
   int n1,n2,temp;
   n1=20; n2=40; 
   printf("The VAlue of N1= %d & N2= %d",n1,n2);
   temp=n1;
   n1=n2;
   n2=temp;
   printf("Now, Values are N1= %d & N2= %d",n1,n2);
   return (0);
   /*
   Without using 3rd variable
   int n1,n2;
   n1=20; n2=40; 
   printf("The VAlue of N1= %d & N2= %d",n1,n2);
   n1=n1+n2;
   n2=n1-n2;
   n1=n1-n2;
   printf("Now, Values are N1= %d & N2= %d",n1,n2);
   return (0);
   */
 }