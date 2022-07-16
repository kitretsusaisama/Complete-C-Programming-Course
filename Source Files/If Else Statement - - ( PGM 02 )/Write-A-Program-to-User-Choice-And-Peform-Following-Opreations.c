/*
Write A Program to User Choice And Peform Following Opreations
(1). Convert $ into ₹  (2). Convert ₹ into $ (3). Convert Second into Hour (4).Calculate the No of Month via Days
*/ 
#include<stdio.h>
#include<conio.h>
void main()
{
int ch,result,dollar,rupees,second;
   printf("\t Menu Options");
   printf("\n (1).Convert $ into ₹ \n (2).Convert ₹ into $ \n (3).Convert Second into Hour. \n (4).Calculate the No of Month via Days \n"); 
   printf("\n Enter Your Option: ");
   scanf("%d",&ch);
   //Dollar to Rupees
   if(ch==1)
   {
       printf("\n Enter Dollar Amount: ");
       scanf("%d",&rupees);
       result=rupees*78;
       printf("\n Total Amount in Rupees: (%d) \n\n\t  *It's not contain exact value as current.*",result);
   }
   //Rupees to Dollar
   else if(ch==2)
   {
   printf("\n Enter Rupees Amount: ");
   scanf("%d",&dollar);
   result=dollar/78;
   printf("\n Total Amount in Dollar: (%d) \n\n\t *It's not contain exact value as current.*",result);
   }
   //Second to Hour
   else if(ch==3)
   {
  printf("Enter Seconds: ");
  scanf("%d",&second);
  result=second/3600;
    printf("\n We Calculate Hours, Result is (%d)",result);
   }
 /*  else if(ch==4)
   {

   }*/
   else
   printf("Please Choose a Vaild Option");
getch();
}