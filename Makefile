# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ercordho <ercordho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 15:19:07 by ercordho          #+#    #+#              #
#    Updated: 2021/11/10 16:17:18 by ercordho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -f

OS := $(shell uname -s)
ifeq ($(OS),Darwin)
 	CFLAGS		+=	-fsanitize=address
endif

SRCS			=	srcs/array/array_display.c \
					srcs/array/array_duplicates.c \
					srcs/array/array_fill.c \
					srcs/array/array_get_bounds.c \
					srcs/array/array_get_solved_index.c \
					srcs/array/array_get_solved_value.c \
					srcs/array/array_get_stack_a.c \
					srcs/array/array_is_sort.c \
					srcs/array/array_nbr.c \
					srcs/array/array_solved.c \
					\
					srcs/ascii/ft_ischarset.c \
					srcs/ascii/ft_isdigit.c \
					srcs/ascii/ft_iswhitespace.c \
					\
					srcs/convert/ft_atol.c \
					\
					srcs/error/error_nbr_duplicate.c \
					srcs/error/error_nbr_greater_int_max.c \
					srcs/error/error_nbr_isnt_int.c \
					srcs/error/error_nbr_isnt_num.c \
					srcs/error/error_nbr_less_int_min.c \
					\
					srcs/memory/ft_memdel.c \
					srcs/memory/ft_memdels.c \
					srcs/memory/ft_memset.c \
					srcs/memory/ft_swap.c \
					\
					srcs/move/push.c \
					srcs/move/reverse.c \
					srcs/move/rotate_push.c \
					srcs/move/rotate.c \
					srcs/move/swap.c \
					\
					srcs/number/ft_nbrlen.c \
					\
					srcs/sort/sort.c \
					\
					srcs/string/countwords.c \
					srcs/string/ft_split.c \
					srcs/string/ft_strdup.c \
					srcs/string/ft_strlen.c \
					srcs/string/ft_strslen.c \
					\
					srcs/write/ft_putchar.c \
					srcs/write/ft_putendl.c \
					srcs/write/ft_putnbr.c \
					srcs/write/ft_putstr.c \
					\
					srcs/main.c
OBJS			=	$(SRCS:.c=.o)

all				:	$(NAME)
$(NAME) 		: 	$(OBJS)
					@$(CC) $(CFLAGS) -o $@ $^
%.o				:	%.c %.h
					@$(CC) -w $(CFLAGS) -c $<
clean			:
					@$(RM) $(OBJS)
fclean			:	clean
					@$(RM) $(NAME)
re				:	fclean all
.PHONY			:	all clean fclean re push_swap