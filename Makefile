
NAME = fillit

SRCS = srcs/main.c srcs/ft_set_map.c srcs/ft_tests.c srcs/ft_set_color.c \
		srcs/ft_is_forms.c srcs/ft_forms_pack_1.c srcs/ft_forms_pack_2.c \
		srcs/ft_tools.c srcs/ft_solver.c srcs/ft_print_forms.c

OBJS =		$(SRCS:.c=.o)

INCLUDES =	-I libft -I includes

LIBS =		-L libft/ -lft

FLAGS =		-Wall -Wextra -Werror

$(NAME):	$(OBJS)
		@make -C libft/ fclean
		@make -C libft/
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
