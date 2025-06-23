/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:34:48 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/10 16:29:41 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdio.h>
#include <stdlib.h>

typedef struct s_element
{
    int valeur;
	struct s_element *precedent;
    struct s_element *prochain;
}   t_element;

typedef struct s_stack
{
	t_element *debut;
	t_element *fin;
	int	size;
} t_stack;

// stack 
t_stack	*init_stack(void);
void	empiler(t_stack *stack, int value);
void	afficher_pile(t_stack *stack, const char *nom);

//push
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);

//swap
void	swap(t_stack *stack);

//rotate
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);

# endif