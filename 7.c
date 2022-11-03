/*7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
    int a,b,c,dist;
    printf("Enter your number: ");
    scanf("%d%d%d",&a,&b,&c);
    dist=b*b-4*a*c;
     if(dist>0)
     printf("real and distinct");
     else
       if(dist<0)
       printf("Imaginary");
       else 
         printf("Real and equal");

          return 0;
}