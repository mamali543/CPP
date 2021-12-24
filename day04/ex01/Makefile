SRCS = main.cpp\
	   Cat.cpp\
	   Dog.cpp\
	   Brain.cpp\
	   Animal.cpp

FLAGS = -Wall -Werror -Wextra

NAME = Animal

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all