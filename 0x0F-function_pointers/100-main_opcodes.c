#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if(argc != 2)
	{
		printf("Error\n");
		rxit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}

		printf("%02hhx", arr[i]);
	}
	return (0);
}
