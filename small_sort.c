/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 16:32:30 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/29 17:17:24 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(char	**str)
{
	char *tmp;

	tmp = str[0];
	str[0] = str[1];
	str[1] = tmp;
}
void	sort_three(char	**str)
{
	
}

void	sort_foor(char **str)
{
	
}

void	sort_five(char **str)
{
	
}
void	small_sort(char **str, int i)
{
	if(i == 2)
		return(swap(str));
	if(i == 3)
		return(sort_three(str));
	if(i == 4)
		return(sort_foor(str));
	if(i == 5)
		return(sort_five(str));
}
