/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:56:34 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/09 16:57:25 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_stack *stack)
{
	t_element *ancien_debut;
	if (!stack || !stack->debut || stack->debut == stack->fin)
		return ;
	ancien_debut = stack->debut;
	stack->debut = ancien_debut->prochain;
	stack->debut->precedent = NULL;
	ancien_debut->prochain = NULL;
	ancien_debut->precedent = stack->fin;
	stack->fin->prochain = ancien_debut;
	stack->fin = ancien_debut;
}
