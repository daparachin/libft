CC 		:= 	clang
FLAGS 	:= 	-Wall -Wextra -Werror
RM		:=	rm -f

NAME	:=	libft.a

SRCS	:= 	ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				ft_tolower.c ft_toupper.c ft_strlen.c ft_memset.c ft_memchr.c \
				ft_atoi.c ft_memcmp.c ft_strncmp.c ft_memcpy.c ft_memmove.c \
				ft_bzero.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strlcpy.c \
				ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c \
				ft_strjoin.c ft_putchar_fd.c ft_striteri.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_itoa.c \
				ft_split.c

B_SRCS	:=	ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstmap.c ft_lstiter.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstadd_front.c \

OBJS	:=	$(SRCS:.c=.o)
B_OBJS :=	$(B_SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(B_OBJS)
			ar -rcs $(NAME) $(OBJS)

bonus:		$(NAME) $(B_OBJS)
			ar -rcs $(NAME) $(B_OBJS)
	
.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(B_OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:		fclean all

rebonus:	fclean bonus
