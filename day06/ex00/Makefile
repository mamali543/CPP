SRCS = main.cpp\
	   convert.cpp

FLAGS = -Wall -Werror -Wextra

NAME = Cast

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all