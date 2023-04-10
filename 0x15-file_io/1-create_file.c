#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file with the given text content
 *
 * @filename: the name of the file to create
 * @text_content: a NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fox, bytes_written;

	if (filename == NULL)
		return (-1);

	fox = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fox == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fox, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fox);
			return (-1);
		}
	}

	close(fox);
	return (1);
}
