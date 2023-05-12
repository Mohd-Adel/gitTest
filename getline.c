#include <stdio.h>
#include <stdlib.h>

/**
 * main - try getline function.
 * @argc: input args count.
 * @argv: input args values.
 * Return: users input string.
 */

int main(int argc, char *argv[])
{
	char *buffer;
	size_t c = 20;
	char characters;

	buffer = malloc(c * sizeof(char));
	printf("$ ");
	characters = getline(&buffer, &c, stdin);
	printf("%s\n", buffer);
	free(buffer);
	return (0);
}
