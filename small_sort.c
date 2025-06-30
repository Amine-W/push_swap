/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:32:30 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/30 10:23:03 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *sa)
{
	int a = sa->debut->valeur;
	int b = sa->debut->prochain->valeur;
	int c = sa->fin->valeur;

	if (a > b && b < c && a < c)
		swap(sa); // 2 1 3 -> 1 2 3
	else if (a > b && b > c)
	{
		swap(sa); // 3 2 1 -> 2 3 1
		reverse_rotate(sa); // 2 3 1 -> 1 2 3
	}
	else if (a > b && b < c && a > c)
		ra(sa); // 2 3 1 -> 3 1 2
	else if (a < b && b > c && a < c)
	{
		swap(sa); // 1 3 2 -> 3 1 2
		ra(sa); // 3 1 2 -> 1 2 3
	}
	else if (a < b && b > c && a > c)
		reverse_rotate(sa); // 2 3 1 -> 1 2 3
}

void	sort_five(t_stack *a, t_stack *b)
{
	while (a->size > 3)
	{
		if (a->debut->valeur == 0 || a->debut->valeur == 1)
			pb(a, b);
		else
			ra(a);
	}
	sort_three(a);
	if (b->debut && b->debut->prochain && b->debut->valeur > b->debut->prochain->valeur)
		swap(b);
	pa(a, b);
	pa(a, b);
}

void	small_sort(t_stack *sa, t_stack *sb)
{
	if (sa->size == 3)
		sort_three(sa);
	if (sa->size == 5)
		sort_five(sa, sb);
}
