/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:43:36 by amwahab           #+#    #+#             */
/*   Updated: 2025/07/02 15:36:49 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*sa;
	t_stack *sb;
	char	**str;
	int		i;

	if (argc < 2)
		return (0);
	check_input(argc, argv);
	if (argc == 2)
		str = ft_split(argv[1], ' ');
	else
		str = argv + 1;
	sa = init_stack();
	sb = init_stack();
	i = ft_strlen_tab(str) - 1;
	while (i >= 0)
	{
		empiler(sa, ft_atoi(str[i]));
		i--;
	}
	quick_sort(sa);
	if(sa->size == 3 || sa->size == 5)
		return(small_sort(sa, sb, sa->size), 0);
	radix_sort(sa, sb);
	return (free_stack(sa, sb), 0);
}

