NAME = push_swap

SRCS = stack_my_values_four.c stack_my_values_three.c find_cases.c whole_cases.c split_push.c target_lowcost.c free_me.c verify.c main.c utils_one.c utils_two.c utils_three.c stack_my_values_two.c swap.c my_reverse_rotate.c my_rotate.c stack_my_values.c my_push.c my_push_sec.c stack_index_cost.c

OBJS = $(SRCS:.c=.o)

CC = cc

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)

		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re
