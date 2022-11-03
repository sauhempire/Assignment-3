/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your marks :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
     printf("You are Passesd the examination");
     else 
     printf("you are Failed in the examination");
     return 0;
}