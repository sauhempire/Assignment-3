/*5. Write a program to check whether a given number is a
 three-digit number or not.*/
 #include<stdio.h>
    int main()
 {
    int x;
    printf("Enter your number\n");
    scanf("%d",&x);

    if(x>99 && x<=999)
      printf("Three digit number\n");  
    if(x<=99 || x>=1000)
      printf("not three digit\n");


     return 0; 
   
 }
