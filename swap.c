/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:30:29 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/09 14:53:04 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack) // intervertir le 1er et le 2eme element 
{
	// prendre le deuxieme element de la stack, lui faire pointer le prev par null et le next par le premier
	//parcourir la liste index +1
	t_element *premier;
	t_element *second;

	if(!stack)
		return ;
	premier = stack->debut; //cree une element on lui attribue la value du premier element pour une ;eilleure lisibilite
	second = premier->prochain;

	//on a les deux element qui sont liee entre eux, il faut les swap
	premier->prochain = second->prochain; // desromais le premier a pris la place du second
	
	second->precedent = NULL; //comme c le premier avant il y a NULL
	second->prochain = premier;  // liee au deuxieme par devant 
	premier->precedent = second; //lier au second par derriere

	// swap effectuee il faut mtn mettre a jour la stack

	stack->debut = second;
}
