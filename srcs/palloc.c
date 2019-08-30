//
// Created by hstiv (maxat dovletov) on 30.08.2019.
//

#include "palloc.h"

void			*palloc()
{
	int			i;

	i = 0;
	// looks for free memory
	while (i < CHUNK_COUNT)
	{
		if (s_buff[i].is_used == 0)
		{
			s_buff[i].is_used = 1;
			return (s_buff[i].ptr);
		}
		i++;
	}
	return (NULL);
}
