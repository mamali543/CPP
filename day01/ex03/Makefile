SRCS = main.cpp\
	   HumanA.cpp\
	   HumanB.cpp\
	   Weapon.cpp

FLAGS = -Wall -Werror -Wextra

NAME = Brain

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all