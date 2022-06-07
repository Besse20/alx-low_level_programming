#include <stdio.h>
/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 * Return: 0
 */
void print_alphabet(void)
{
char alpha = 'a';
do {
_putchar(alpha);
alpha++;
} while (alpha <= 'z');
_putchar('\n');
}
