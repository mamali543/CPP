SRCS = main.cpp\
	  newZombie.cpp\
	  Zombie.cpp\
	  randomChump.cpp

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