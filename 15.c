/*15. Write a program to check whether a given number is positive, negative or zero.*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    if(x>=1 )
     printf("Psitive Number: ");
     else 
      if(x<=-1)
        printf("Negative Number: ");
        else 
         if(x==0)
         printf("number is Zero:");
         return 0;
}