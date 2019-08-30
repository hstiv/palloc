#include "../includes/palloc.h"

int			main()
{
	char	*ptr;

	p_init();
	ptr = (char *)palloc();
	pfree((void *)ptr);
	write(1, "\033[0;32m", 7);
	write(1, "[OK]", 4);
	write(1, "\033[0m", 5);
	return (0);
}