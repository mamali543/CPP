SRCS = main.cpp\
	   Fixed.cpp

FLAGS = -Wall -Werror -Wextra

NAME = Fixed

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all