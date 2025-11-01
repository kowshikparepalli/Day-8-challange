#include<stdio.h>
int main()
{
  int customers,items,quantity,i,j,price,bill,k,feedback;
  float revenue=0,avg_feedback,GST,total,subtotal=0;
  float highest_bill=0,total_feedback=0;
 //input
  printf("Enter number of customers : ");
  scanf("%d",&customers);
   for(i=1;i<=customers;i++)
    {
     printf("Customer %d : \n",i);
     printf("Enter no of items : ");
     scanf("%d",&items);
      for(j=1;j<=items;j++)
      {
        printf("Price of Item %d : ",j);
        scanf("%d",&price);
        printf("Enter the quantity of Item %d : ",j);
        scanf("%d",&quantity);
        
        subtotal+=quantity*price;
      }
     GST=subtotal*0.05;
     total=subtotal+GST;
     revenue+=total;
     printf("Customer %d bill : %f ",i,total);
    if(total>highest_bill)
    highest_bill=total;
     do
     {
        printf("Please Give Feedback : ");
        scanf("%d \n",&feedback);
        if(feedback>1||feedback<5)
        printf("Invalid Feedback \n");
     }
     while(feedback<1||feedback>5);
     
        total_feedback=total_feedback+feedback;
    }
    avg_feedback=total_feedback/customers;
   printf("\n Restaurant Bill Summary \n");
 printf("Total Revenue Today:%f \n",revenue);  
 printf("Average Feedback Rating:%f \n",avg_feedback);
 printf("Highest Bill Amount:%f \n",highest_bill);
}