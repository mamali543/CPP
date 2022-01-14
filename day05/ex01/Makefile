SRCS = main.cpp\
	   Bureaucrat.cpp\
	   Form.cpp	

FLAGS = -Wall -Werror -Wextra

NAME = Bureaucrat

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++ $(FLAGS) $(SRCS) -o $(NAME) -std=c++98
clean :
	@rm -f $(NAME)

fclean : clean

re : fclean
	@make all