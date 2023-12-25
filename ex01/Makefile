CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
STD = -std=c++98
RM = rm -f

SRCS = main.cpp PhoneBook.cpp Contact.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = archive

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(STD) $(OBJS) -o $(NAME)
$(OBJS) : $(SRCS)
	$(CXX) $(CXXFLAGS) $(STD) $(SRCS) -c
clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re