SRCS = main.cpp\
	   ClapTrap.cpp\
	   ScavTrap.cpp\
	   FragTrap.cpp

FLAGS = -Wall -Werror -Wextra

NAME = FragTrap

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all