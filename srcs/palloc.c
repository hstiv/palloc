//
// Created by hstiv (maxat dovletov) on 30.08.2019.
//

#include "palloc.h"

void			*palloc()
{
	int			i;
	void		*ptr;

	i = 0;
	ptr = NULL;
	while (i < CHUNK_COUNT)
	{
		if (s_buff[i].is_used == 0)
			ptr = s_buff[i].ptr;
		i++;
	}
	return (ptr);
}
