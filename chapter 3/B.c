#include <stdio.h>
/* Two variables a and b contain values 10 and 20.
Write a program to interchange the contents of a and b without using 3rd variable*/
int main()
{
    int a = 10, b = 20;
    printf("\nBefore Interchange: a = %d, b = %d", a, b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("\nAfter Interchange: a = %d, b = %d", a, b);

    return 0;
}