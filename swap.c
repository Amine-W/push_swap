/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:30:29 by amwahab           #+#    #+#             */
/*   Updated: 2025/07/02 15:58:17 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack)
{
	t_element	*premier;
	t_element	*second;

	if (!stack)
		return ;
	premier = stack->debut;
	second = premier->prochain;
	premier->prochain = second->prochain;
	second->precedent = NULL;
	second->prochain = premier;
	premier->precedent = second;
	stack->debut = second;
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack)
{
	t_element	*premier;
	t_element	*second;

	if (!stack)
		return ;
	premier = stack->debut;
	second = premier->prochain;
	premier->prochain = second->prochain;
	second->precedent = NULL;
	second->prochain = premier;
	premier->precedent = second;
	stack->debut = second;
	write(1, "sb\n", 3);
}
