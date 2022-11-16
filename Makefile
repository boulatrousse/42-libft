# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboulatr <lboulatr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 13:06:34 by lboulatr          #+#    #+#              #
#    Updated: 2022/11/16 16:50:14 by lboulatr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c  ft_atoi.c ft_strncmp.c	ft_isascii.c	ft_memcmp.c	ft_putendl_fd.c	ft_strdup.c	ft_strlen.c	ft_substr.c	ft_bzero.c	ft_isdigit.c	ft_memcpy.c	ft_putnbr_fd.c	ft_striteri.c	ft_strmapi.c	ft_tolower.c	ft_calloc.c	ft_isprint.c	ft_memmove.c	ft_putstr_fd.c	ft_strjoin.c	ft_strnstr.c	ft_toupper.c	ft_isalnum.c	ft_itoa.c	ft_memset.c	ft_split.c	ft_strlcat.c	ft_strrchr.c	ft_isalpha.c	ft_memchr.c	ft_putchar_fd.c	ft_strchr.c	ft_strlcpy.c	ft_strtrim.c

OBJS = ${SRCS:.c=.o}

CC = gcc

HEAD = includes

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

LIB = ar rc

LLIB = ranlib

RM = rm -f

.c.o:
	${CC} ${FLAGS} -I${HEAD} -c $< -o ${<:.c=.o}

libft.a:commands

all:	${NAME}

commands:	${OBJS}
	${LIB} ${NAME} ${OBJS}
	${LLIB} ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
