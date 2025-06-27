/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 09:07:52 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/27 09:08:49 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	partition(int *tab, int low, int high)
{
	int	temp;
	int	i;
	int	j;

	i = low - 1;
	j = low;
	while (j < high)
	{
		if (tab[j] <= tab[high])
		{
			i++;
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
		}
		j++;
	}
	i++;
	temp = tab[i];
	tab[i] = tab[high];
	tab[high] = temp;
	return (i);
}

void	quick_sort_array(int *tab, int low, int high)
{
	int	pivot;
	
	if (low < high)
	{
		pivot = partition(tab, low, high);
		quick_sort_array(tab, low, pivot - 1);
		quick_sort_array(tab, pivot + 1, high);
	}
}

int	*remplir_tab(t_stack *stack)
{
	int 		*tab;
	int			i;
	t_element	*current;
	
	tab = malloc(sizeof(int) * stack->size);
	if (!tab)
		return (free(tab), NULL);
	current = stack->debut;
	i = 0;
	while (current)
	{
		tab[i] = current->valeur;
		current = current->prochain;
		i++;
	}
	return (tab);
}

void indexage(t_stack *stack, int *tab, int size)
{
	t_element *current;

	current = stack->debut;
	while (current)
	{
		int i;

		i = 0;
		while (i < size)
		{
			if (current->valeur == tab[i])
			{
				current->valeur = i;
				break ;
			}
			i++;
		}
		current = current->prochain;
	}
}

void quick_sort(t_stack *stack)
{
	int	*tab;
	
	if (!stack || stack->size <= 1)
		return ;
	tab = remplir_tab(stack);
	if (!tab)
		return ;
	quick_sort_array(tab, 0, stack->size - 1);
	indexage(stack, tab, stack->size);
	free(tab);
}
