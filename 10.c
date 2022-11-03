/*10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
int main()
{
    int cp,sp;
    float profit,loss;
    printf("Enter your cost price: ");
    scanf("%d",&cp);
    printf("Enter your selling price: ");
    scanf("%d",&sp);
      if(sp>cp)
      {
         profit= sp-cp;
         profit=profit*100/cp;
         printf("\n%.0f%% is Profit percentage",profit);

      }
      else
       {
         loss=cp-sp;
         loss=loss*100/cp;
         printf("\n%.0f%% Loss percentage\n\n",loss);
       } 
       return 0;

}