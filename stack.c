/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 10:00:24 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/08 15:42:21 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_stack(void) 
{
	t_stack *stack = malloc(sizeof(t_stack));
	stack->debut = NULL;
	stack->size = 0;
	return (stack);
}

void	empiler(t_stack *stack, int value)
{
	t_element *new_element = malloc(sizeof(t_element));
	if(new_element)
		return ;
		
	new_element->valeur = value; //lui attribue la value donnee en parametre
	new_element->prochain = stack->debut; //le fait pointe vers l'ancien sommet
	new_element->precedent = NULL; // pas de precedent au sommet
	
	if(stack->debut != NULL) // si la pile n'est pas vide donc pour la premiere fois
		stack->debut->precedent = new_element;  // pointe vers le nouveau
	
	stack->debut = new_element;
	stack->size++;
}

