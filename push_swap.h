/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gd-auria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:24:44 by gd-auria          #+#    #+#             */
/*   Updated: 2024/07/04 17:15:12 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include "push_struct.h"

char		**ft_split(const char *s, char c);
int			main(int argc, char **argv);
long int	ft_atoi(const char *str);
int			isdigit(int c);
int			clean_argv(int argc);
int			check_argv(int argc, char **argv);
int			is_number(char *arg);
int			check_aldig(int c);
int			is_it_sorted(t_node *stack);
int			len_st(t_node *stack);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strdup(const char *src);
void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *ptr, size_t n);
void		*ft_calloc(size_t count, size_t size);
size_t		ft_strlen(const char *str);
size_t		ft_strlen_split(char **str);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		swap(t_node **stack);
void		a_swap(t_node **a_stack);
void		b_swap(t_node **b_stack);
void		ss_swap(t_node **a_stack, t_node **b_stack);
t_node		*create_node(void);
t_node		*find_last(t_node *stack);
t_node		*find_second_last(t_node *stack);
t_node		*min_val_node(t_node *st);
t_node		*high_val_node(t_node *node);
t_node		*lowest_checker(t_node *stack);
void		cheapest(t_node *b_stack);
void		append_node(t_node **stack, int n);
void		fill_stack(t_node **st, char **argv, char **split_res, int argc);
void		reverse_rotate(t_node **node);
void		rra(t_node **a_stack);
void		rrb(t_node **b_stack);
void		rrr(t_node **a_stack, t_node **b_stack);
void		rotate(t_node **node);
void		ra(t_node **a_stack);
void		rb(t_node **b_stack);
void		rr(t_node **a_stack, t_node **b_stack);
void		free_split(char **split_res, int split_len);
void		pa(t_node **a, t_node **b);
void		pb(t_node **a, t_node **b);
void		second_p(t_node **b, t_node **a);
void		push(t_node **b, t_node **a);
void		print_stacks(t_node *a_stack, t_node *b_stack);
t_node		*target(t_node *a, t_node *b);
void		three_sort(t_node	**stack);
void		print_one_stack(t_node *a_stack);
void		index_where_node(t_node **stack);
void		set_index_where_median(t_node *st);
void		lowest_cost(t_node *stack);
int			ft_first_case(t_node **a, t_node **b, t_node *a_t, t_node *b_t);
int			ft_sec_case(t_node **a, t_node **b, t_node *a_t, t_node *b_t);
int			ft_thr_case(t_node **a, t_node **b, t_node *a_t, t_node *b_t);
int			ft_four_case(t_node **a, t_node **b, t_node *a_t, t_node *b_t);
void		my_cases(t_node **a_stack, t_node **b_stack);
void		all_cases(t_node **a, t_node **b, t_node *t_a, t_node *t_b);
int			count_cost(t_node **a, t_node **b, t_node *a_t, t_node *b_t);
int			lower_cost(t_node **a, t_node **b, t_node *a_t, t_node *b_t);
void		free_node(t_node **stack);
void		five_sort(t_node **a, t_node **b);
int			second_min_val(t_node *stack, int val_lowest);
int			find_other_min_val(t_node *a);
t_node		*penultimate_min_val_node(t_node *node);
#endif
