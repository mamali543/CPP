SRCS = main.cpp\
	   Serialization.cpp

FLAGS = -Wall -Werror -Wextra

NAME = Serialize

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all