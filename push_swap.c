/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:43:36 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/24 10:24:19 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	t_stack *sa;
	t_stack *sb;
	int	i;
	
	//parsing atoi stocker dans le stack 
	sa = init_stack();
	sb = init_stack();
	
	i = 1337;
	empiler(sa,i);
	i = 1;
	empiler(sa,i);
	i = 13;
	empiler(sa,i);
	i = 985654;
	empiler(sa,i);
	i = 5;
	empiler(sa,i);
	i = 10;
	afficher_pile(sa, "a");
	afficher_pile(sb, "b");
	quick_sort(sa);
	afficher_pile(sa, "a");
	afficher_pile(sb, "b");
	radix_sort(sa, sb);
	afficher_pile(sa, "a");
	afficher_pile(sb, "b");
}
