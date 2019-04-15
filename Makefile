NAME = libfts.a

H_DIR = include/
S_DIR = src/
O_DIR = obj/

O_FILES = $(addprefix $(O_DIR),$(S_FILES:.s=.o))

NASM = nasm -f macho64
CC = gcc
FLAGS = -Wall -Werror -Wextra

S_FILES =	ft_isdigit.s\
			ft_tolower.s\
			ft_toupper.s\
			ft_isalpha.s\
		  

all: $(NAME)

$(NAME): $(O_FILES)
	ar rc $@ $^
	ranlib $@

$(O_FILES): $(O_DIR)%.o: $(S_DIR)%.s
	@mkdir $(O_DIR) 2> /dev/null || echo "" > /dev/null
	$(NASM) $< -o $@

test: $(NAME) test.c
	$(CC) -c test.c $(FLAG)
	$(CC) -o test test.o libfts.a $(FLAG)

clean:
	@rm -rf $(O_DIR) test.o

fclean: clean
	@rm -f $(NAME) test
	@echo $(NAME) Deleted.

re: fclean all

.PHONY: all clean fclean re