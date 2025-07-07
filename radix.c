/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 08:32:46 by amwahab           #+#    #+#             */
/*   Updated: 2025/07/07 15:33:01 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:03:00 by amwahab           */
/*   Updated: 2025/07/07 15:10:00 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_sa_to_sb(t_stack *sa, t_stack *sb, int bit)
{
	int	j;
	int	size;

	j = 0;
	size = sa->size;
	while (j < size)
	{
		if (((sa->debut->valeur >> bit) & 1) == 0)
			pb(sa, sb);
		else
			ra(sa);
		j++;
	}
}

void	process_sb_to_sa(t_stack *sa, t_stack *sb, int bit)
{
	int	j;
	int	size;

	j = 0;
	size = sb->size;
	while (j < size)
	{
		if (((sb->debut->valeur >> (bit + 1)) & 1) == 1)
			pa(sa, sb);
		else
			rb(sb);
		j++;
	}
}

void	radix_sort(t_stack *sa, t_stack *sb)
{
	int	max_bits;
	int	stack_size;
	int	i;

	max_bits = 0;
	stack_size = sa->size;
	while ((stack_size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		process_sa_to_sb(sa, sb, i);
		process_sb_to_sa(sa, sb, i);
		i++;
	}
	while (sb->size > 0)
		pa(sa, sb);
}


