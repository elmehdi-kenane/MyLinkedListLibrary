VPATH = functions
SRC = main.c print_list.c new_list.c addnode_at_head.c addnode_at_tail.c addnode_at_index.c addnode_at_value.c \
	delete_via_value.c delete_via_index.c delete_duplicates.c\
	search_via_value.c replace_value.c\
	length_list.c\

OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
PROGRAM = program

all: $(PROGRAM)
	@printf "\033[32mBuild complete!\033[0m\n"

%.o: %.c MyLinkedListLibrary.h
	$(CC) -c $< -o $(VPATH)/$@ $(FLAGS)

$(PROGRAM): $(OBJ)
	$(CC) $(addprefix $(VPATH)/, $(OBJ)) -o $(PROGRAM) $(FLAGS)

clean:
	rm -fr $(VPATH)/*.o
fclean: clean
	rm -fr $(PROGRAM)

re: fclean all