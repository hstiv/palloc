//
// Created by hstiv (maxat dovletov) on 30.08.2019.
//

#ifndef PALLOC_H
# define PALLOC_H

# include <stdint.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define CHUNK_SIZE		100 // can be changed
# define PULL_SIZE		2048 // can be changed

# define CHUNK_COUNT	PULL_SIZE / CHUNK_SIZE

/*
**			Structure			*
*/
typedef struct 			s_pull
{
	uint32_t			ptr[CHUNK_SIZE];
	int					is_used;
}						t_pull;

/*
**			Global variable		*
*/
t_pull					s_buff[CHUNK_COUNT];

/*
**			Functions			*
*/
void					p_init(); // pull initialization
void					*palloc(); // return ptr from static mem
void					pfree(void *ptr); // frees ptr*

#endif
