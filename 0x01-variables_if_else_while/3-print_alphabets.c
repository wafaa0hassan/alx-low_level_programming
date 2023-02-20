#include <stdio.h>

/**
 * main - print the alphabet in uppercase,
 * followed by a new line.
 * Return: Always (Success)
 *
 */

int main(void)

{
        char c;

        for (c = 'A'; c <= 'Z'; c++)
                putchar(c);
        putchar('\n');
        return (0);

}
