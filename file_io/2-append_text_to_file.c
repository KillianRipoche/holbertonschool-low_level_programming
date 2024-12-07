#include "main.h"

/**
* append_text_to_file - Entry
* @filename: name of the file.
* @text_content: end of the file
*
* Return: return 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	 int fd, len = 0, write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[len])
		len++;

	write_status = write(fd, text_content, len);
	close(fd);

	if (write_status == -1)
		return (-1);

	return (1);
}
