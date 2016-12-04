HEAD= ft_ls

SRC= ft_putstr.c ft_ls.c main.c sort.c

OBJ= $(SRC:.c=.o)

all: $(HEAD)

$(HEAD): $(OBJ)
	gcc -o $(HEAD) $(OBJ)

clean:
	@ echo "\033[1m\033[31mClear *.o " "\033[m\033[1m[\033[32mDone\033[m\033[1m]\033[m"
	@ rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean $(HEAD)

.PHONY: clean
