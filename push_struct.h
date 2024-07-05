/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:33:44 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 12:02:51 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_STRUCT_H
# define PUSH_STRUCT_H

# include "push_swap.h"

typedef struct s_t_node
{
	int					value;
	int					ind;
	int					cost;
	int					size_b;
	int					m;
	int					lowest_cost;
	int					where;
	struct s_t_node		*next;
	struct s_t_node		*target;
}	t_node;

#endif
