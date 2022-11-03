/*3. Write a program to check whether a given number is an 
even number or an odd number.*/
#include<stdio.h>
    int main()
  {
    int x;
    printf("Enter your number\n");
    scanf("%d",&x);

     if(x%2==0)
      printf("an even number\n");
      else 
      printf("an Odd number\n");

   return 0;
  }