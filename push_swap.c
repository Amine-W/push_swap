/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:43:36 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/27 09:42:27 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *sa;
	t_stack *sb;
	int *tab;
	
	if(argc > 2)
		return (0);
		
	sa = init_stack();
	sb = init_stack();
	
	tab = atoi(argv[1]);
	empiler(sa, tab);
	empiler(sb, tab);
	afficher_pile(sa, "a");
	afficher_pile(sb, "b");
	quick_sort(sa);
	afficher_pile(sa, "a");
	afficher_pile(sb, "b");
	radix_sort(sa, sb);
	afficher_pile(sa, "a");
	afficher_pile(sb, "b");
	free(sa);
	free(sb);
}
