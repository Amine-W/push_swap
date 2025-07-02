/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:56:34 by amwahab           #+#    #+#             */
/*   Updated: 2025/07/02 14:58:38 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack)
{
	t_element	*sa1;
	t_element	*sa2;
	t_element	*saf;

	if (!stack || !stack->debut || !stack->debut->prochain)
		return ;
	sa1 = stack->debut;
	sa2 = sa1->prochain;
	saf = stack->fin;
	saf->prochain = sa1;
	sa1->precedent = saf;
	sa1->prochain = NULL;
	sa2->precedent = NULL;
	stack->debut = sa2;
	stack->fin = sa1;
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack)
{
	t_element	*sa1;
	t_element	*sa2;
	t_element	*saf;

	if (!stack || !stack->debut || !stack->debut->prochain)
		return ;
	sa1 = stack->debut;
	sa2 = sa1->prochain;
	saf = stack->fin;
	saf->prochain = sa1;
	sa1->precedent = saf;
	sa1->prochain = NULL;
	sa2->precedent = NULL;
	stack->debut = sa2;
	stack->fin = sa1;
	write(1, "rb\n", 3);
}

void	rra(t_stack *stack)
{
	t_element	*saf;
	t_element	*prev;

	if (!stack || !stack->debut || !stack->debut->prochain)
		return ;
	saf = stack->fin;
	prev = saf->precedent;
	prev->prochain = NULL;
	stack->fin = prev;
	saf->prochain = stack->debut;
	stack->debut->precedent = saf;
	saf->precedent = NULL;
	stack->debut = saf;
	write(1, "rra\n", 4);
}
