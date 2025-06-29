/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:56:34 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/29 09:52:28 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack *stack)
{
	t_element *sa1;
	t_element *sa2;
	t_element *saF = stack->fin;

	if (!stack || !stack->debut || !stack->debut->prochain)
		return ;

	sa1 = stack->debut;
	sa2 = sa1->prochain;
	saF = stack->fin;

	saF->prochain = sa1;
	sa1->precedent = saF;
	sa1->prochain = NULL;
	sa2->precedent = NULL;
	
	stack->debut = sa2;
	stack->fin = sa1;
	write(1, "ra\n", 3);
}

void rb(t_stack *stack)
{
	t_element *sa1;
	t_element *sa2;
	t_element *saF = stack->fin;

	if (!stack || !stack->debut || !stack->debut->prochain)
		return ;

	sa1 = stack->debut;
	sa2 = sa1->prochain;
	saF = stack->fin;

	saF->prochain = sa1;
	sa1->precedent = saF;
	sa1->prochain = NULL;
	sa2->precedent = NULL;
	
	stack->debut = sa2;
	stack->fin = sa1;
	write(1, "rb\n", 3);
}
