#include "main.h"

/**
 * print_aphabet_x10 - function that print aphabet 10 times
 * return: alway return 0
 */
void print_alphabet_x10(void)
{
int i;
char j;
for (i = 0; i < 10; i++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}