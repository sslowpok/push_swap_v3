/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:59:11 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/15 17:19:12 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "printf/ft_printf.h"

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

long long int	ft_atoi_long(const char	*nptr);
void			ft_validation(int argc, char **argv);
void			ft_print(t_list *stack);
void			ft_stack_fill(char *str, t_list **stack);
void			ft_sa(t_list **stack_a, int flag);
void			ft_sb(t_list **stack_b, int flag);
void			ft_ss(t_list **stack_a, t_list **stack_b);
void			ft_pa(t_list **stack_a, t_list **stack_b);
void			ft_pb(t_list **stack_a, t_list **stack_b);
void			ft_ra(t_list **stack_a, int flag);
void			ft_rb(t_list **stack_b, int flag);
void			ft_rr(t_list **stack_a, t_list **stack_b);
void			ft_rra(t_list **stack_a, int flag);
void			ft_rrb(t_list **stack_b, int flag);
void			ft_rrr(t_list **stack_a, t_list **stack_b);
void			ft_error(void);
int				ft_issorted(t_list **stack);

#endif