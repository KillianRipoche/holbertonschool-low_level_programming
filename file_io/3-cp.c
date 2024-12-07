#include "main.h"
/**
 * main - Entry
 * @argc: Number of argument
 * @argv: Array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, num, written;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
		close(file_from), exit(99);

	while ((num = read(file_from, buffer, 1024)) > 0)
	{
		written = write(file_to, buffer, num);
		if (written != num)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			close(file_from), close(file_to), exit(99);
	}

	if (num == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		close(file_from), close(file_to), exit(98);

	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
