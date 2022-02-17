SRCS = main.cpp\
	   Base.cpp\
	   A.cpp\
	   B.cpp\
	   C.cpp

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