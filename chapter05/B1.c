#include <stdio.h>
// R(tomorrow) = (1 + a).R(today) - c.R(today).W(today)
// W(tomorrow) = (1 - b).W(today) + c.d.R(today).W(today)
int main()
{
    const float a = 0.01, b = 0.005, c = 0.00001, d = 0.01;
    float R_today, R_tomorrow, W_today, W_tomorrow;
    R_today = 10000, W_today = 1000;
    printf("Day    1: Rabbit = %6d, Wolves = %4d\n", (int)R_today, (int)W_today);
    for (int i = 1; i <= 1000; i++)
    {
        if (!(i % 25))
            printf("Day %4d: Rabbit = %6d, Wolves = %4d\n", i, (int)R_today, (int)W_today);
        R_tomorrow = (1 + a) * R_today - c * R_today * W_today;
        W_tomorrow = (1 - b) * W_today + c * d * R_today * W_today;
        R_today = R_tomorrow;
        W_today = W_tomorrow;
    }

    return 0;
}