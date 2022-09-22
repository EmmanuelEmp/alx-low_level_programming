#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
* infinite_add - C function that adds two numbers stored
*in strings to a buffer.
*Assumes that strings are never empty and
*that numbers will always be positive, or 0.
*Assumes there are only digits stored in the number strings.
*If result can be stored in the buffer,
*returns a pointer to the result.
*If result cannot be stored in the buffer, returns `0`.
*@n1:first number to be added
*@n2:second number to be added
*@r: store result
*@size_r: size of buffer
*Return:returns pointer to result
*/

void rev_string(char *n)
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
* add_strings - Adds the numbers stored in two strings.
* @n1: The string containing the first number to be added.
* @n2: The string containing the second number to be added.
* @r: The buffer to store the result.
* @r_index: The current index of the buffer.
*
* Return: If r can store the sum - a pointer to the result.
*         If r cannot store the sum - 0.
*/

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int i = 0;
	int j = 0;
	char temp;
	int num, tens = 0;

	while (*(n + i) != '\0')
	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		i++;
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	for (; *n1; n1--; r_index++)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
		num = *(n1 - '0') + tens; 
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	for (; *n2; n2--;  r_index--)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
		num = (*n2 - '0') + tens; 
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10; 
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);

}
