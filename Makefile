NAME = libft.a

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
		ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c\
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
		ft_memchr.c ft_memcmp.c 

OBJS = $(SRC:.c=.o)

INCLUDE = libft.h

$(NAME) : $(OBJS) $(INCLUDE)
	@ar rsc $(NAME) $(OBJS)

all: $(NAME)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(NAME)

re: all clean

.PHONY: all clean fclean re