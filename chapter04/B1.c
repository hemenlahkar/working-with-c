#include <stdio.h>
/*Any integer  is input through keyboard.
Write a program to find out whether it is an odd number or an even number*/
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    !(N % 2) ? printf("%d is an Even number\n", N) : printf("%d is an Odd number\n", N);
    return 0;
}