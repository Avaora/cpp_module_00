CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
$(OBJ) : $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -c
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re