# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/26 12:10:25 by amwahab           #+#    #+#              #
#    Updated: 2025/06/28 15:05:40 by amwahab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'exécutable
NAME = push_swap

# Compilateur et flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = push_swap.c stack.c push.c quick_sort.c radix.c rotate.c input_security.c swap.c
OBJ = $(SRC:.c=.o)

# Répertoire de la libft
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

# Compilation
all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR) > /dev/null
	@echo "libft OK"

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) > /dev/null
	@echo "push_swap OK"

clean:
	@$(MAKE) clean -C $(LIBFT_DIR) > /dev/null
	@rm -f $(OBJ)

fclean: clean
	@$(MAKE) fclean -C $(LIBFT_DIR) > /dev/null
	@rm -f $(NAME)

re: fclean all

