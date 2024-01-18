# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ithernan <ithernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 10:36:34 by ithernan          #+#    #+#              #
#    Updated: 2024/01/18 12:59:41 by ithernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
AR = ar
ARFLAGS = rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS = ft_printf_char.c ft_printf_nbr.c ft_printf_string.c ft_printf_uint.c \
		ft_printf_hex.c ft_printf_ptr.c ft_printf.c

#SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
#			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
#			ft_lstmap.c
			

#MAKEFLAGS += --silent

OBJS = $(SRCS:.c=.o)

#OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS) 
#$(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

#bonus: $(OBJS_BONUS)
#	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY: all clean fclean re #bonus
