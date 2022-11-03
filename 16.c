/*16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter your number:");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
     printf("Uppercase Alphabet");
     else 
     if(x>='a' && x<='z')
            printf("Lowercase alphabet");
            else 
            if(x>='0' && x<='9')
                   printf("a Digit");
                   else
                    printf("Special Character");
                    
                     return 0;              
}