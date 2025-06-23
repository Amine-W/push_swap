/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 10:00:24 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/23 08:28:30 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_stack(void) 
{
	t_stack *stack = malloc(sizeof(t_stack));
	stack->debut = NULL;
	stack->fin=NULL;
	stack->size = 0;
	return (stack);
}

void	empiler(t_stack *stack, int value)
{
	t_element *new_element = malloc(sizeof(t_element));
	if(!new_element)
		return ;
		
	new_element->valeur = value;
	new_element->prochain = stack->debut;
	new_element->precedent = NULL;
	
	if(stack->debut != NULL) // si la pile n'est pas vide donc pour la premiere fois
		stack->debut->precedent = new_element;  // pointe vers le nouveau
	else
		stack->fin=new_element;
	stack->debut = new_element;
	stack->size++;
}

void afficher_pile(t_stack *stack, const char *nom)
{
	t_element *current;

	if (!stack || !stack->debut)
	{
		printf("Pile %s est vide.\n", nom);
		return ;
	}
	printf("Pile %s :\n", nom);
	current = stack->debut;
	while (current)
	{
		printf("%d\n", current->valeur);
		current = current->prochain;
	}
}

