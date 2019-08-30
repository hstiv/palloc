#include "../includes/palloc.h"

int			main()
{
	char	*ptr;
	int		i;
	char	s[CHUNK_SIZE];

	i = 0;
	p_init();
	ptr = (char *)palloc();
	while (i < CHUNK_SIZE)
		ptr[i++] = 65;
	ptr[i] = 0;
	i = 0;
	while (i < CHUNK_SIZE)
		s[i++] = 65;
	s[i] = 0;
	if (!strcmp(ptr, s))
	{
		write(1, "\033[0;32m", 7);
		write(1, "[OK]", 4);
		write(1, "\033[0m", 5);
	}
	pfree((void *)ptr);
	return (0);
}
