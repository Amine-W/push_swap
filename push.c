/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:30:21 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/09 14:49:15 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pb(t_stack *a, t_stack *b)
{
	t_element *sa1;
	t_element *sb1; 

	if (!a || !a->debut)
		return ;
	sa1 = a->debut;
	a->debut = sa1->prochain;
	if (a->debut)
		a->debut->precedent = NULL;
	else
		a->fin = NULL;
	sb1 = b->debut;
	sa1->prochain = sb1;
	if (sb1)
		sb1->precedent = sa1;
	else
		b->fin = sa1;
	b->debut = sa1;
	sa1->precedent = NULL;
	b->size++;
	a->size--;
}

void pa(t_stack *a, t_stack *b)
{
	t_element *sa1;
	t_element *sb1; 

	if (!a || !a->debut)
		return ;
	sb1 = b->debut;
	b->debut = sb1->prochain;
	if (b->debut)
		b->debut->precedent = NULL;
	else
		b->fin = NULL;
	sa1 = a->debut;
	sb1->prochain = sa1;
	if (sa1)
		sa1->precedent = sb1;
	else
		a->fin = sb1;
	a->debut = sb1;
	sb1->precedent = NULL;
	a->size++;
	b->size--;
}

