#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: arg counter
 * @argv: arg value
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
