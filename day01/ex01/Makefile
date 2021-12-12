SRCS = main.cpp\
	   Zombie.cpp\
	   ZombieHorde.cpp

FLAGS = -Wall -Werror -Wextra

NAME = Zombie

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all
