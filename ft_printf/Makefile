CC = cc -c

CFLAGS = -Wall -Werror -Wextra 

SRCS =	ft_linkhex.c\
ft_printf.c\
ft_putchar.c\
ft_puthex.c\
ft_puthexmem.c\
ft_putnbr.c\
ft_putstr.c\
ft_putu.c\
ft_puthexmaj.c

OBJS = ${SRCS:.c=.o}

ARV = ar -rcs

NAME = libftprintf.a

REM = rm -f

.c.o :
	$(CC) $(CFLAGS) $< -o $@
	$(ARV) $(NAME) $@

all : $(NAME)
$(NAME) : $(OBJS)

clean :
	${REM} ${OBJS}

fclean : clean
	${REM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
