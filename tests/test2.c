#include "../includes/palloc.h"

// testing usage

void		putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

int			main()
{
	char	*ptr;

	p_init();
	ptr = (char *)palloc();
	strcpy(ptr, "[OK]");
	write(1, "\033[0;32m", 7);
	putstr(ptr);
	write(1, "\033[0m", 5);
	pfree((void *)ptr);
	return (0);
}
