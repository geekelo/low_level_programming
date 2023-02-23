#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i, y;

        i = 0;
        y = positive_or_negative(i);
        printf("%d is %d", i, y);
        return (0);
}
