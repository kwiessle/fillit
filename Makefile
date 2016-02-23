NAME = fillit

SRCS = srcs/main.c srcs/solver.c srcs/ft_tests.c \
	   srcs/ft_tools.c srcs/tetriminos_handling.c

OBJS =		$(SRCS:.c=.o)
INCLUDES =	-I libft -I includes
LIBS =		-L libft/ -lft
FLAGS =		-Wall -Wextra -Werror

$(NAME):	$(OBJS)
			@make -C libft/ re
			@gcc -o $(NAME) $(OBJS) $(LIBS)
			@echo "Complitation ok"

$(OBJS): %.o: %.c
			@gcc $(FLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

clean:
	rm -f	$(OBJS)

fclean: clean
	rm -f	$(NAME)
	@make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re
