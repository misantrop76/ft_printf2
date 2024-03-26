SRCS = 	ft_char.c\
		ft_int.c\
		ft_itoa_unsigned.c\
		ft_pointer.c\
		ft_pourc.c\
		ft_printf.c\
		ft_printf_utils.c\
		ft_unsigned.c\
		ft_unsigned_hexa.c\
		libft_fct.c\
		libft_fct2.c\

HEADERS = libftprintf.h

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: 		${NAME}

$(OBJS):	${HEADERS}

$(NAME):	${OBJS}
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