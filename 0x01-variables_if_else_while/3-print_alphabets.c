#include <time.h>

#include <stdio.h>

#include <stdlib.h>


/**
 * main - print the alphabet in uppercase,
 * followed by a new line.
 * Return: Always (Success)
 *
 */

int main(void)

{
        char low;

        for (low = 'a'; low <= 'Z'; low++)
        putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
        putchar('\n');

	return (0);

}
