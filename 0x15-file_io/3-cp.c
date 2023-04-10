#include "main.h"

/**
 * main - Entry point.
 * @argc: The number of arguments passed.
 * @argv: Pointer to an array of pointers to strings containing
 *        the arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, read_val, write_val;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	read_val = read(fd1, buffer, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd1 == -1 || read_val == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_val = write(fd2, buffer, read_val);
		if (fd2 == -1 || write_val == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_val = read(fd1, buffer, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_val > 0);

	free(buffer);
	close(fd1);
	close(fd2);

	return (0);
}
