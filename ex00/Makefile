NAME	=	megaphone
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror
HDR		=
SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all		:	$(NAME)

test	:	all
	@echo "\033[34morigin string\033[0m"
	@echo "shhhhh... I think the students are asleep..."
	@echo "\033[34minput into execute file\033[0m"
	./$(NAME) "shhhhh... I think the students are asleep..."
	@echo
	@echo "\033[34morigin string\033[0m"
	@echo Damnit " ! " "Sorry students, I thought this thing was off."
	@echo "\033[34minput into execute file\033[0m"
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo
	./$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(CFLAGS) $(HDR) -o $@ $(OBJS)

%.o		:	%.cpp
	$(CC) $(CFLAGS) $(HDR) -o $@ -c $<

clean	:
	rm -f $(OBJS)

fclean	: 	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
