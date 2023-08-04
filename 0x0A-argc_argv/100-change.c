#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Calculator
 * @argc: num
 * @argv: array
 *
 * Return: 0or1
 */
int main(int argc, char *argv[])
{
    int amount, coinIndex, coinCount;
    int coins[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    amount = atoi(argv[1]);
    coinCount = 0;

    if (amount < 0)
    {
        printf("0\n");
        return 0;
    }

    for (coinIndex = 0; coinIndex < 5 && amount >= 0; coinIndex++)
    {
        while (amount >= coins[coinIndex])
        {
            coinCount++;
            amount -= coins[coinIndex];
        }
    }

    printf("%d\n", coinCount);
    return 0;
}
