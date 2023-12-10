SRCS	=	main.cpp Contact.cpp phoneBook.cpp Utils.cpp

OBJS	=	$(SRCS:.cpp=.o)

NAME	=	PhoneBook

CC		=	c++   

CPPFLAGS=	-std=c++98 -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
					$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
