#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main(void)
{
    int die1;
    int die2;
    int sum;
    int frequency[13] = { 0 };

    srand(time(NULL));

    for (int i = 0; i < ROLLS; i++)
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        ++frequency[sum];
    }

    printf("Sum   Count   Relative frequency\n");
    for (sum = 2; sum <= 12; sum++)
    {
        printf("%2d  %6d   %8.4f\n",
            sum,
            frequency[sum],
            (double)frequency[sum] / ROLLS);
    }

    system("pause");
    return 0;
}