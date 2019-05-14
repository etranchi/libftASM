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
			ft_islower.s\
			ft_toupper.s\
			ft_isupper.s\
			ft_isalpha.s\
			ft_isalnum.s\
			ft_isascii.s\
			ft_isprint.s\
			ft_strlen.s\
			ft_bzero.s\
			ft_strcat.s\
			ft_puts.s\
			ft_memset.s\
			ft_memcpy.s\
			ft_putendline.s\
			ft_strdup.s\
			ft_cat.s\
			ft_power2.s\
		  	ft_strcpy.s\

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