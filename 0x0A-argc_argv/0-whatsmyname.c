#include <stdio.h>

/**
* main - print the name of this program
* followed by a newline.
* @argc: number of argument passed into main
* @argv: pointer to array of argument passed into main.
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
