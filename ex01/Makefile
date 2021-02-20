NAME	=	phonebook
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror
HDR		=
SRCS	=	phonebook.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all		:	$(NAME)

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
