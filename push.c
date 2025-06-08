/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:30:21 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/08 16:15:29 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	// prendre le premier element de la sa la faire pointer vers le premier element de la sb
	// mettre a jour la sa pour que le deuxieme element prev pointe NULL
	// mettre a jour la sb pour que son premier element prev precedent sa 1

	t_element *sa1;
	t_element *sb1;
	
	a->debut = sa1;
	b->debut = sb1;

	sa1->prochain = sb1;
	sb1->precedent = sa1;
	sa1->precedent = NULL;
	
}