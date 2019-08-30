//
// Created by hstiv (maxat dovletov) on 30.08.2019.
//

#include "palloc.h"

static void			threw_error(char *s)
{
	(s) ? write(1, s, strlen(s)) : 0;
	exit(0);
}

void				pfree(void *ptr)
{
	int				i;

	i = 0;
	while (i < CHUNK_COUNT)
	{
		// looking for struct where ptr pulled from
		if (s_buff[i].is_used && ptr == s_buff[i].ptr)
		{
			// setting that it is not used anymore;
			s_buff[i].is_used = 0;
			ptr = NULL;
			return ;
		}
		i++;
	}
	// if ptr not from s_buff throwing error
	threw_error("Error: pfree function wrong usage");
}
