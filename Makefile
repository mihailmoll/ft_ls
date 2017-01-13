NAME= ft_ls

CC= gcc -Wall -Wextra -Werror

SRC= ft_ls.c main.c

OBJ= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ make -s -C libft/
	@ echo "\033[1m\033[32mCompile ft_ls\033[m\033[1m\033[32m"
	@ $(CC) -o $(NAME) $(OBJ)

clean:
	@ echo "\033[1m\033[31mRemove \033[31m.o"
	@ make -s -C libft/ clean
	@ rm -rf *.o

fclean: clean
	@ echo "\033[1m\033[31mRemove \033[31mfiles"
	@ make -s -C libft/ fclean
	@ rm -rf ft_ls

re: fclean $(HEAD)

.PHONY: clean
