/*6. Write a program to print greater between two numbers. 
Print one number of both are the same. */
 #include<stdio.h>
     int main()
 {
    int x,y;
    printf("Enter your number\n");
    scanf("%d%d",&x,&y);

     if(x>y || y>x)
     {
        if(x>y || y<x)
        {
            printf("greater between two number is %d",x);
        }
         else
        {
            printf("greater between two number is %d",y);
        }
     }
     else  
      {
         if(x==y)
         printf("Both number are same\n");
     }
     return 0;
 }
