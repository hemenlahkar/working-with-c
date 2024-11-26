#include <stdio.h>
/*A number is entered through the keyboard.
The number may contain 1, 2, 3, 4 or 5 digits.
Write a program to find the number of digits in the number*/
int main()
{
    int N, digitCount;
    printf("Enter the number: ");
    scanf("%d", &N);
    for (digitCount = 0; N != 0; digitCount ++, N /= 10);
    printf("The number of digits in the entered number is: %d\n", digitCount);
    return 0;
}