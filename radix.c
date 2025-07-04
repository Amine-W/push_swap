/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 08:32:46 by amwahab           #+#    #+#             */
/*   Updated: 2025/07/02 15:59:48 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *sa, t_stack *sb)
{
	int	max_bits;
	int	size;

	size = sa->size;
	max_bits = 0;
	while ((size - 1) >> max_bits != 0)
		max_bits++;
	radix_sort_recursive(sa, sb, max_bits, 0);
}

void	process_sa_bit(t_stack *sa, t_stack *sb, int current_bit)
{
	int	size;
	int	i;
	int	current_val;

	i = 0;
	size = sa->size;
	while (i < size)
	{
		current_val = sa->debut->valeur;
		if (((current_val >> current_bit) & 1) == 0)
			pb(sa, sb);
		else
			ra(sa);
		i++;
	}
}

void	process_sb_bit(t_stack *sa, t_stack *sb, int current_bit)
{
	int	i;
	int	current_val;

	i = sb->size;
	while (i > 0)
	{
		current_val = sb->debut->valeur;
		if (((current_val >> (current_bit + 1)) & 1) == 1)
			pa(sa, sb);
		else
			rb(sb);
		i--;
	}
}

void	radix_sort_recursive(t_stack *sa, t_stack *sb,
	int max_bits, int current_bit)
{
	if (current_bit == max_bits)
	{
		while (sb->size > 0)
			pa(sa, sb);
		return ;
	}
	process_sa_bit(sa, sb, current_bit);
	process_sb_bit(sa, sb, current_bit);
	radix_sort_recursive(sa, sb, max_bits, current_bit + 1);
}
