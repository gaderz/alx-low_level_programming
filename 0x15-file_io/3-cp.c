#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024
#define FILE_PERMISSIONS 0664

/**
 * main - copies the contents of one file to another
 *
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0 on success, 97 if incorrect number of arguments,
 *         98 if can't read from source file, 99 if can't write to dest file,
 *         100 if memory allocation fails.
 */
int main(int argc, char *argv[])
{
	int source_file, dest_file, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file dest_file\n");
		return (97);
	}
	buffer = malloc(BUFFER_SIZE * sizeof(char));
	if (buffer == NULL)
		dprintf(STDERR_FILENO, "Error: Cannot allocate memory\n");
	return (100);
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
		free(buffer);
		return (98);
	}
	dest_file = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, FILE_PERMISSIONS);
	if (dest_file == -1)
		dprintf(STDERR_FILENO, "Error: Cannot write to file %s\n", argv[2]);
	free(buffer);
	close(source_file);
	return (99);
	while ((read_bytes = read(source_file, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(dest_file, buffer, read_bytes);
		if (write_bytes != read_bytes)
			dprintf(STDERR_FILENO, "Error: Failed to write to file %s\n", argv[2]);
		free(buffer);
		close(source_file);
		close(dest_file);
		return (99);
	}
	free(buffer);
	close(source_file);
	close(dest_file);
	return (0);
}
