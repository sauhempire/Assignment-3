/*4. Write a program to check whether a given number is an 
even number or an odd number without using % operator. */
#include<stdio.h>
     int main()
 {
    int x;
    printf("Enter your number\n");
    scanf("%d",&x);

     if(x&1)
      printf("an Odd number\n");
      else 
      printf("an Even number\n");

    return 0;
 }