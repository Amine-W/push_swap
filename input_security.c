/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_security.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:01 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/28 12:29:45 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_error(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_SUCCESS);
}
int	check_digit(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_double(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_int(char **argv)
{
	int		i;
	long	c;

	i = 0;
	while (argv[i])
	{
		c = ft_atoi(argv[i]);
		if (c < INT_MIN || c > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}

void	check_input(int argc, char **argv)
{
	char	**array;

	if (argc == 2)
		array = ft_split(argv[1], ' ');
	else
		array = argv + 1;
	if (check_digit(array) || check_double(array) || check_int(array))
	{
		if (argc == 2)
			free(array);
		print_error();
	}
}

