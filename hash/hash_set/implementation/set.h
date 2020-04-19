/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <jko@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 20:38:34 by jko               #+#    #+#             */
/*   Updated: 2020/04/19 20:44:28 by jko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_H
# define SET_H

# define BIG_PRIM 1000003
# define POWER 109

# include <stdlib.h>

typedef struct		s_node
{
	void			*data;
	struct s_node	*next;
}					t_node;

typedef struct		s_hash_set
{
	unsigned int	size;
	t_node			**set;
	int				(*cmp)(void *, void *);
}					t_hash_set;

t_hash_set			*set_init(int (*cmp)(void *, void *));
int					set_insert(t_hash_set *hash_set, void *data);
int					set_exists(t_hash_set *set, void *data);
int					set_delete(t_hash_set *set,
						void *data, void (*free_data)(void *));
void				free_set(t_hash_set *set, void (*free_data)(void *));

#endif
