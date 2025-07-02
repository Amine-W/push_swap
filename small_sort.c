/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:32:30 by amwahab           #+#    #+#             */
/*   Updated: 2025/07/02 15:37:11 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack *stack)
{
	if (stack->debut->valeur < stack->debut->prochain->valeur
		&& stack->debut->prochain->valeur < stack->fin->valeur)
		return ;
	else if (stack->debut->valeur < stack->fin->valeur
		&& stack->fin->valeur < stack->debut->prochain->valeur)
	{
		sa(stack);
		ra(stack);
	}
	else if (stack->debut->prochain->valeur < stack->debut->valeur
		&& stack->debut->valeur < stack->fin->valeur)
		sa(stack);
	else if (stack->debut->prochain->valeur < stack->fin->valeur
		&& stack->fin->valeur < stack->debut->valeur)
		ra(stack);
	else if (stack->fin->valeur < stack->debut->valeur
		&& stack->debut->valeur < stack->debut->prochain->valeur)
		rra(stack);
	else if (stack->fin->valeur < stack->debut->prochain->valeur
		&& stack->debut->prochain->valeur < stack->debut->valeur)
	{
		sa(stack);
		rra(stack);
	}
}

void	sort_5(t_stack *sa, t_stack *stack_b)
{
	while (stack_b->size < 2)
	{
		if (sa->debut->valeur == 0 || sa->debut->valeur == 1)
			pb(sa, stack_b);
		else
			ra(sa);
	}
	sort_3(sa);
	if (stack_b->debut->valeur < stack_b->debut->prochain->valeur)
		sb(stack_b);
	pa(sa, stack_b);
	pa(sa, stack_b);
}

void	small_sort(t_stack *sa, t_stack *sb, int i)
{
	if (i == 3)
		sort_3(sa);
	if (i == 5)
		sort_5(sa, sb);
}
