/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:34:48 by amwahab           #+#    #+#             */
/*   Updated: 2025/06/28 12:29:33 by amwahab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
# include <limits.h>

typedef struct s_element
{
	int valeur;
	int	index;
	struct s_element *precedent;
    struct s_element *prochain;
}   t_element;

typedef struct s_stack
{
	t_element *debut;
	t_element *fin;
	int	size;
} t_stack;

// stack 
t_stack	*init_stack(void);
void	empiler(t_stack *stack, int value);
void	afficher_pile(t_stack *stack, const char *nom);
void	free_stack(t_stack *stack);

//push
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);

//swap
void	swap(t_stack *stack);

//rotate
void	rotate(t_stack *stack);

//sort
void	quick_sort(t_stack *stack);
void	radix_sort_recursive(t_stack *a, t_stack *b, int max_bits, int current_bit);
void	radix_sort(t_stack *a, t_stack *b);

//input	
int		check_double(char **str);
void	check_input(int argc, char **argv);
int	check_int(char **argv);
int	check_digit(char **argv);
int	ft_isdigit(int c);
int	print_error(void);
int	ft_strcmp(const char *s1, const char *s2);

//utils
char	**ft_split(char *str, char c);
int	ft_atoi(const char *str);
 
# endif