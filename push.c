/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:30:21 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/26 10:33:00 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_stack *sa, t_stack *sb)
{
	t_element *sb1; 

	if (!sb || !sb->debut)
		return ;
	sb1 = sb->debut;
	sb->debut = sb->debut->prochain;

	if(sb->debut)
		sb->debut->precedent = NULL;
	else
		sb->fin = NULL;
	sb->size--;
	
	sb1->prochain = sa->debut;
	sb1->precedent = NULL;
	if(sa->debut)
		sa->debut->precedent = sb1;
	else
		sa->fin = sb1;
	sa->debut = sb1;
	sa->size++;
}

void pb(t_stack *sa, t_stack *sb)
{
	t_element *sa1;

	if(!sa || !sa->debut)
    return ;
	sa1 = sa->debut;
	sa->debut = sa->debut->prochain;
	
	if (sa->debut) 
		sa->debut->precedent = NULL;
	else
		sa->fin = NULL;
	sa->size--;
	sa1->prochain = sb->debut; 
	sa1->precedent = NULL; 
	if (sb->debut)
		sb->debut->precedent = sa1;
	else
		sb->fin = sa1;
	sb->debut = sa1;
	sb->size++;
}

