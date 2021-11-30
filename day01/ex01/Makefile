SRCS = main.cpp \
	   Zombie.cpp \
	   ZombieHorde.cpp	

NAME = Zombie

FLAGS = -Wall -Werror -Wextra

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME)
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all