# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: truangsi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 16:41:15 by truangsi          #+#    #+#              #
#    Updated: 2022/09/30 22:27:30 by truangsi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_atoi.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c \
				ft_bzero.c ft_isdigit.c ft_memcpy.c \
				ft_strncmp.c ft_tolower.c ft_isprint.c ft_memmove.c \
				ft_strnstr.c ft_toupper.c ft_isalnum.c \
				ft_memset.c ft_strlcat.c ft_strrchr.c ft_isalpha.c ft_memchr.c \
				ft_strlcpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

OBJS = $(SRCS:.c=.o)
all: $(NAME)

%o: %c
	gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
