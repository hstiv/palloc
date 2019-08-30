//
// Created by hstiv (maxat dovletov) on 30.08.2019.
//

#include "palloc.h"

void			p_init()
{
	int			i;

	i = 0;
	while (i < CHUNK_COUNT)
		s_buff[i++].is_used = 0;
}
