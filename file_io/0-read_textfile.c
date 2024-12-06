#include "main.h"
/**
 * read_textfile - Entry
 * @filename: nom du fichier
 * @letters: nombre de lettres affichées
 * Return: nombre de char imprimés
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	__ssize_t lect, print; /* lect = lecture */
	int fd = 0; /* file director */
	char *count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	count = malloc(sizeof(char) * (letters));
	if (count == NULL)
	{
		close(fd);
		return (0);
	}

	lect = read(fd, count, letters);
	if (lect == -1)
	{
		free(count);
		close(fd);
		return (0);
	}

	print = write(STDOUT_FILENO, count, lect);
	free(count);
	close(fd);
	return (print);
}
