SRCS = main.cpp\
	   ClapTrap.cpp\
	   ScavTrap.cpp

FLAGS = -Wall -Werror -Wextra

NAME = ScavTrap

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all