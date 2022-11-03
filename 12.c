/*12. Write a program to check whether a given alphabet 
is in uppercase or lowercase*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
     printf("\nUppercase Alphabet\n\n");
    if(ch>='a' && ch<='z')
     printf("\nLowercase Alphabet\n\n");

     return 0;
}