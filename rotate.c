/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 14:56:34 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/10 16:29:02 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_stack *stack)
{
	t_element *premier_element;
	
	if (!stack || !stack->debut || !stack->fin)
		return;
	if (stack->debut == stack->fin)
		return;
		
	premier_element = stack->debut;
	
	//deuxiement element devient le premier
	stack->debut = premier_element->prochain;
	stack->debut->precedent = NULL;
	
	//l'ancien premier element devient le dernier
	premier_element->prochain = NULL;
	premier_element->precedent = stack->fin;
	stack->fin->prochain = premier_element;
	stack->fin = premier_element;
}

void	reverse_rotate(t_stack *stack)
{
	t_element *dernier_element;
	t_element *avant_dernier;
	
	if (!stack || !stack->debut || !stack->fin)
		return;
	if (stack->debut == stack->fin)
		return;
		
	dernier_element = stack->fin;
	avant_dernier = dernier_element->precedent;
	
	//dernier devient premier
	dernier_element->prochain = stack->debut;
	dernier_element->precedent = NULL;
	stack->debut->precedent = dernier_element;
	
	//avant dernier devient dernier
	avant_dernier->prochain = NULL;
	stack->fin = avant_dernier;
	
	//maj debut
	stack->debut = dernier_element;
}