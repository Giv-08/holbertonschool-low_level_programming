#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void err_exit (char *str, char *file, int code)
{
	dprintf(STDERR_FILENO, str, file);
	exit(code);
}
