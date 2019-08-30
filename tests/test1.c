#include "../includes/palloc.h"

// testing is memory allocated properly

int			main()
{
	char	*ptr;
	int		i;

	i = 0;
	p_init();
	while (i++ < CHUNK_COUNT)
		ptr = (char *)palloc();
	pfree((void *)ptr);
	write(1, "\033[0;32m", 7);
	write(1, "[OK]", 4);
	write(1, "\033[0m", 5);
	return (0);
}
