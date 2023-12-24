CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
STD = -std=c++98
RM = rm -r

SRCS = main.cpp PhoneBook.cpp Contact.cpp
OBJS = $(SRCS:.o=.cpp)
NAME = archive

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(STD) $(OBJS) -o $(NAME)
$(OBJS) :
	$(CXX) $(CXXFLAGS) $(STD) -c $(SRCS)
clean :
	$(RM) $(OBJS)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re