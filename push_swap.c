/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:43:36 by amwahab           #+#    #+#             */
/*   Updated: 2025/07/03 12:36:59 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*sa;
	t_stack	*sb;
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
	if(!sb || !sa)
		return (free(sa), free(sb), 0);
	i = ft_strlen_tab(str);
	while (i--)
		empiler(sa, ft_atoi(str[i]));
	quick_sort(sa);
	if (sa->size == 3 || sa->size == 5)
		return (small_sort(sa, sb, sa->size), 0);
	return (radix_sort(sa, sb), free_stack(sa, sb), 0);
}
