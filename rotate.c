/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:56:34 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/23 08:22:58 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_stack *stack)
{
	t_element *sa1 = stack->debut;
	t_element *sa2 = sa1->prochain;
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
}

