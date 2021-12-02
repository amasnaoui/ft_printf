SRCS    =    ft_printf.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_print_hexa.c ft_print_address.c ft_putunsigned.c
OBJS    =    $(SRCS:.c=.o)
HEADER    =    -I./
NAME	=	libftprintf.a
CC        =    cc
RM        =    rm -f
CFLAGS    =    -Wall -Wextra -Werror
AR        =    ar rcs

# ----------------------------------------------------------------------------

all:        $(NAME)

%.o:         %.c
			$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

$(NAME):    $(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:        clean
			$(RM) $(NAME)

re:            fclean all

.PHONY:        all clean fclean re
