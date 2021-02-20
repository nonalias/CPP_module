NAME	=	phonebook
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror
HDR	=	includes
	

SRCS	=	phonebook.cpp \
		Contact.cpp \

OBJS	=	$(SRCS:%.cpp=%.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(CFLAGS) -I $(HDR) $(OBJS) -o $@ 

%.o		:	%.cpp
	$(CC) $(CFLAGS)  -o $@ -c $<

clean	:
	rm -f $(OBJS)

fclean	: 	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
