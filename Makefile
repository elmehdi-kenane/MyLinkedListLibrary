VPATH = functions

SRC = main.c new_list.c addnode_at_head.c addnode_at_tail.c addnode_at_index.c addnode_at_value.c \
	delete_via_value.c \

OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
PROGRAM = program

all: $(PROGRAM)
	@printf "\033[32mBuild complete!\033[0m\n" 

%.o: %.c MyLinkedListLibrary.h
	$(CC) $(FLAGS) -c $< 

$(PROGRAM): $(OBJ)
	$(CC) $(VPATH)/$(OBJ) -o $(PROGRAM) $(FLAGS)

clean:
	rm -fr $(VPATH)/*.o
fclean: clean
	rm -fr $(VPATH)/$(PROGRAM)

re: fclean all