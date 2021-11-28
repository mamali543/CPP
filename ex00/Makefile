SRCS = megaphone.cpp\

NAME = megaphone

all :: $(NAME)

$(NAME) : $(SRCS)
		@clang++  ${SRCS}  -o$(NAME)

clean :
		@rm -f ${NAME}

fclean : clean
		@rm -f $(NAME)

re : fclean
		@make all