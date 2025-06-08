/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:34:48 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/08 15:33:30 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdio.h>

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

# endif