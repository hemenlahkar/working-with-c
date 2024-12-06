#include <stdio.h>
int main()
{
    int x, y, r;
    printf("Enter the radius: ");
    scanf("%d", &r);
    printf("\nThe integer points intersected by the circle of radius %d are as follows:\n", r);
    for (x = -1 * r; x <= r; x++)
    {
        for (y = -1 * r; y <= r; y++)
        {
            if (x * x + y * y == r * r)
                printf("(%3d, %3d)\n", x, y);
        }
    }

    return 0;
}