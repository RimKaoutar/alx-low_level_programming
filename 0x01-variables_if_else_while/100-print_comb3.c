#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
    int i = 48, j;

    while (i < 57)
    {
        j = i+1;
        while (j <= 57)
        {
            putchar(i);
            putchar(j++);
            if (i == 56 && j == 58)
                break;
            putchar(44);
            putchar(32);

        }
        i++;

    }
    putchar(10);
}
