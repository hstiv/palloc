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
	(ptr == NULL) ? threw_error("Error: pfree function recived [NULL]\n") : 0;
	while (i < CHUNK_COUNT)
	{
		// looks for a struct ptr pulled from
		if (s_buff[i].is_used && ptr == s_buff[i].ptr)
		{
			// setting that it is not used anymore
			s_buff[i].is_used = 0;
			ptr = NULL;
			return ;
		}
		i++;
	}
	// if ptr is not from s_buff
	threw_error("Error: pfree function wrong usage\n");
}
