#include <stdio.h>
/* Write a program which finds four digit perfect squares
where  the number represented by the first two digits and
the number represented by last two digits are also perfect squares*/

int isSquare(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (i * i == n)
        {
            return 1;
        }
    }
    return 0;
}

int firstHalf(int n)
{
    return n / 100;
}

int lastHalf(int n)
{
    return n - n / 100 * 100;
}

int main()
{
    printf("4 Digit square numbers whose both half are also square numbers are as follows:\n");
    for (int i = 1000; i < 10000; i++)
    {
        if (isSquare(i) && isSquare(firstHalf(i)) && isSquare(lastHalf(i)))
            printf(" %d ", i);
    }

    return 0;
}