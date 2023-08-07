#include "main.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
/** read_testfile - function reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to file.
 * @letters: number of letters it should read and print.
 * return 0 is fail or actual number of letters it could read & print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	long int amount;

	file = fopen("filename", O_RD);
	amount = write(STDOUT_FILENO, read(file, letters), letters);
	if (filename == NULL || file == NULL || amount < 0)
		return (0);
	return (amount);

}
