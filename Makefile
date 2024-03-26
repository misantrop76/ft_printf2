# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mminet <mminet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/02 15:11:52 by mminet            #+#    #+#              #
#    Updated: 2024/03/26 16:39:28 by mminet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_pointer.c\
		ft_printf.c\
		ft_string.c\
		ft_int.c\

HEADERS = ft_printf.h

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

LIB = libft

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: 		${NAME}

$(OBJS):	${HEADERS}

$(NAME):	${OBJS} ${LIB}
	make -C $(LIB)
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

fclean: 	clean
	${RM} ${NAME}

clean:
	${RM} ${OBJS}

re:			fclean all

.PHONY:		all clean fclean