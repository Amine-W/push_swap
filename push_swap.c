/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:43:36 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/29 11:39:44 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*sa;
	t_stack *sb;
	char	**array;
	int		i;

	if (argc < 2)
		return (0);
	check_input(argc, argv);
	if (argc == 2)
		array = ft_split(argv[1], ' ');
	else
		array = argv + 1;
	sa = init_stack();
	sb = init_stack();
	if (!sa)
	{
		if (argc == 2)
			free(array);
		write(2, "Error\n", 6);
		return (1);
	}
	i = ft_strlen_tab(array) - 1;
	while (i >= 0)
	{
		empiler(sa, ft_atoi(array[i]));
		i--;
	}
	quick_sort(sa);
	radix_sort(sa, sb);
	return (0);
}

