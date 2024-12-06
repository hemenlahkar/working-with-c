#include <stdio.h>
/* Write a program which finds a four digit number AABB
which is a perfect square. A and B represents different digits*/

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

int checkAABB(int n)
{
    if (n % 10 == n / 10 % 10 && n /100 % 10 == n/1000)
    {
        return 1;
    }
    return 0;
}

int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        if (checkAABB(i) && isSquare(i))
        {
            printf(" %d ", i);
        }
    }

    return 0;
}