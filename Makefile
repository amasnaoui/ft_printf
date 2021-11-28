SRCS    =    ft_printf.c ./SRCS/ft_putstr_fd.c ./SRCS/ft_putchar_fd.c ./SRCS/ft_putnbr_fd.c
OBJS    =    $(SRCS:.c=.o)
#BONUS    =    ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
#               ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
#BOBJS    =    $(BONUS:.c=.o)
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

#bonus:		all $(BOBJS)
#			$(AR) $(NAME) $(BOBJS)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:        clean
			$(RM) $(NAME)

re:            fclean all

.PHONY:        all clean fclean re
