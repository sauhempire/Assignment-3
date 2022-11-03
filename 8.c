/*8. Write a program to check whether a given year is a leap year or not.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter your year: ");
    scanf("%d",&x); 
   if(x%400==0)
    {
       if(x%4==0)
         printf("Non century Year is leap\n");
        else
         printf("Non century Year is not leap\n");
    
    } 
    else
    {
       if(x%400==0)
         printf(" century Year is leap\n");
       else
         printf(" century Year is not leap\n");
    }     
     

}