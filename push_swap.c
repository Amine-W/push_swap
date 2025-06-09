/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:43:36 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/09 14:53:33 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *sa;
	t_stack *sb;
	int	i;
	
	//parsing atoi stocker dans le stack 
	sa = init_stack();
	sb = init_stack();
	
	i = 0;
	while(i < 9)
	{
		empiler(sa, i);
		i++;
	}
	i = 10;
	while(i < 20)
	{
		empiler(sb, i);
		i++;
	}
	afficher_pile(sa, "a");
	afficher_pile(sb, "b");
	swap(sb);
	afficher_pile(sa, "a");
	afficher_pile(sb, "b");
}
