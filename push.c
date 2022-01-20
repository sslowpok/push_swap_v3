/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslowpok <sslowpok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:21:07 by sslowpok          #+#    #+#             */
/*   Updated: 2022/01/20 13:49:56 by sslowpok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	
	if (!*stack_b)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, temp);
	ft_putendl_fd("pa", 1);
	// // ------------
	// ft_printf("a:\n");
	// ft_print(*stack_a);
	// ft_printf("b:\n");
	// ft_print(*stack_b);
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (!*stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, temp);
	ft_putendl_fd("pb", 1);
	// // ------------
	// ft_printf("a:\n");
	// ft_print(*stack_a);
	// ft_printf("b:\n");
	// ft_print(*stack_b);
}