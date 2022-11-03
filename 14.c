/*14. Write a program to check whether a given number is
 divisible by 7 or divisible by 3*/
 #include<stdio.h>
 int main()
 {
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);
    if(x%3==0 || x%2==0)
      printf("Number is divisible by 3 or 2\n");
   else
      printf(" Number is not  divisible by 3 or 2\n");
    return 0;
}
 