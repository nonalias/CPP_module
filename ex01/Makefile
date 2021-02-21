NAME	=	phonebook
CC		=	g++
CFLAGS	=	-Wall -Wextra -Werror
HDR	=	-include includes/Contact.hpp \
		-include includes/phonebook.hpp \
	

SRCS	=	phonebook.cpp \
		Contact.cpp \

OBJS	=	$(SRCS:%.cpp=%.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	@echo
	@echo "\033[32mLinking...\033[0m"
	$(CC) $(CFLAGS) $(HDR) $(OBJS) -o $@ 
	@echo "\033[34mLink Complete!...\033[0m"

%.o		:	%.cpp
	@echo
	@echo "\033[32mCompiling...\033[0m"
	$(CC) $(CFLAGS)  -o $@ -c $<
	@echo "\033[34mCompile Complete!...\033[0m"

clean	:
	rm -f $(OBJS)

fclean	: 	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
