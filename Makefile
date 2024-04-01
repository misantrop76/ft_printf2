# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mminet <mminet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/02 15:11:52 by mminet            #+#    #+#              #
#    Updated: 2024/04/01 14:31:09 by mminet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_pointer.c\
		ft_printf.c\
		ft_string.c\
		ft_int.c\

SRCS_L =	libft/ft_atoi.c\
			libft/ft_bzero.c\
			libft/ft_calloc.c\
			libft/ft_isalnum.c\
			libft/ft_isalpha.c\
			libft/ft_isascii.c\
			libft/ft_isdigit.c\
			libft/ft_isprint.c\
			libft/ft_itoa.c\
			libft/ft_lstadd_back.c\
			libft/ft_lstadd_front.c\
			libft/ft_lstclear.c\
			libft/ft_lstdelone.c\
			libft/ft_lstiter.c\
			libft/ft_lstlast.c\
			libft/ft_lstmap.c\
			libft/ft_lstnew.c\
			libft/ft_lstsize.c\
			libft/ft_memccpy.c\
			libft/ft_memchr.c\
			libft/ft_memcmp.c\
			libft/ft_memcpy.c\
			libft/ft_memmove.c\
			libft/ft_memset.c\
			libft/ft_putchar_fd.c\
			libft/ft_putendl_fd.c\
			libft/ft_putnbr_fd.c\
			libft/ft_putstr_fd.c\
			libft/ft_split.c\
			libft/ft_strchr.c\
			libft/ft_strdup.c\
			libft/ft_striteri.c\
			libft/ft_strjoin.c\
			libft/ft_strlcat.c\
			libft/ft_strlcpy.c\
			libft/ft_strlen.c\
			libft/ft_strmapi.c\
			libft/ft_strncmp.c\
			libft/ft_strnstr.c\
			libft/ft_strrchr.c\
			libft/ft_strtrim.c\
			libft/ft_substr.c\
			libft/ft_tolower.c\
			libft/ft_toupper.c\

LIBFT = libft/libft.a

HEADER = ft_printf.h

LIB_I = libft/libft.h

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: 		${NAME}

$(OBJS):	${HEADER} $(LIB_I)

$(NAME):	${OBJS} $(LIBFT)
	cp $(LIBFT) .
	mv libft.a $(NAME)
	ar rcs ${NAME} ${OBJS}
	ranlib ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(LIBFT):	$(SRCS_L) $(LIB_I)
			make -C libft/.

fclean: 	clean
	${RM} ${NAME}
	make fclean -C libft/.

clean:
	${RM} ${OBJS}
	make clean -C libft/.

re:			fclean all

.PHONY:		all clean fclean