NAME = Materia
CC = c++
SRCS = main.cpp Cure.cpp Ice.cpp MateriaSource.cpp Character.cpp AMateria.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -O0
OBJS = $(SRCS:.cpp=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -c

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)