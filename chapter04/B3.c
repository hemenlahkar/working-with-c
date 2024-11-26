#include<stdio.h>
/* Any year is input through keyboard
Using operators, determine whether the year is leap or not*/
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(!(year%4))
        printf("%d is a leap year!\n", year);
    else
        printf("%d is not a leap year!\n", year);
    return 0;
}