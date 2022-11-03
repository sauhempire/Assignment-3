/*1. Write a program to check whether a given number is 
positive or non-positive.*/
#include<stdio.h>
    int main()
  {
    int x;
    printf("Enter your number\n");
    scanf("%d",&x);
     
     if(x>0)
      printf("Number is positive\n");
      else
      printf("Number is non-positive\n");


   return 0;
  }