/*18. Write a program which takes the month number as
 an input and display number of days in that month*/
 #include<stdio.h>
 int main()
 {
    int x;
    printf("Enter your month number: ");
    scanf("%d",&x);
    switch(x)
     {
    case 1:
        printf("January have 31 days");
        break;
    case 2:
        printf("February  have 28 days in a common year and 29 days in leap years"); 
        break;
    case 3:
        printf("March have 31 days");
        break;
    case 4:
        printf("April have 30 days");
        break;
    case 5:
        printf("May have 31 days");
        break;
    case 6:
        printf("June have 30 days");
        break;
    case 7:
        printf("July have 31 days");
        break;
    case 8:
        printf("August have 31 days");
        break;
    case 9:
        printf("September have 30 days");
        break;
    case 10:
        printf("October have 31 days");
        break;
    case 11:
        printf("November have 30 days");
        break;
    case 12:
        printf("December have 31 days");    
     }
return 0;                                               

 }