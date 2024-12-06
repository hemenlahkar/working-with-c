#include <stdio.h>

int main()
{
    int profit_per_SD = 500, current_sell = 100, fixed_cost = 10000, advertisement_cost = 1000;
    int total_in, total_out;
    while (1)
    {
        if ((profit_per_SD * current_sell > fixed_cost + advertisement_cost) && (profit_per_SD * current_sell * 1.2 < fixed_cost + advertisement_cost * 2))
        {
            printf("Super Duper sales = %d\n", current_sell);
            printf("Advertising budget = %d\n", advertisement_cost);
            printf("Net profit = %d\n", profit_per_SD * current_sell);
            break;
        }

        advertisement_cost *= 2;
        current_sell *= 1.2;
    }
    return 0;
}