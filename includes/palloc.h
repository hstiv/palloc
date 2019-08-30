//
// Created by hstiv (maxat dovletov) on 30.08.2019.
//

#ifndef PALLOC_H
# define PALLOC_H

# include <stdint.h>
# include <string.h>

# define CHUNK_SIZE		55
# define PULL_SIZE		2048
# define CHUNK_COUNT	PULL_SIZE / CHUNK_SIZE - 1

/*
**			Structure			*
*/
typedef struct 			s_pull
{
	void				*ptr[CHUNK_SIZE];
	int					is_used;
}						t_pull;

/*
**			Global variable		*
*/
t_pull					s_buff[CHUNK_COUNT];

/*
**			Functions			*
*/
void					p_init(void); // pull initialization
void					*palloc(); // return ptr from static mem
void					pfree(void *ptr); // frees ptr*

#endif
