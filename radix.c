/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 08:32:46 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/24 11:08:30 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void radix_sort(t_stack *sa, t_stack *sb)
{
	int	max_bits;
	int	size;
	
	size = sa->size;
	printf("Début radix_sort\n");
	max_bits = 0;
	printf("maxbit[%d]", max_bits);
	while ((size - 1) >> max_bits != 0)
		max_bits++;
	printf("maxbit[%d]", max_bits);
	radix_sort_recursive(sa, sb, max_bits, 0);
}

void radix_sort_recursive(t_stack *sa, t_stack *sb, int max_bits, int current_bit)
{
	int	size;
	int	i;
	int	current_val;

	if (current_bit >= max_bits)
		return ;
	size = sa->size;
	i = 0;
	while (i < size)
	{
		current_val = sa->debut->valeur;
		if (((current_val >> current_bit) & 1) == 0)
		{
			pb(sa, sb);
			printf("pb: moved %d from A to B\n", current_val);
		}
		else
			rotate(sa);
		i++;
	}
	while (sb->size > 0)
	{
		pa(sa, sb);
		printf("pb: moved %d from A to B\n", current_val);	
	}
	radix_sort_recursive(sa, sb, max_bits, current_bit + 1);
}
