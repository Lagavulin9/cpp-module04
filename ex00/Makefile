NAME = poly
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
LDFLAGS = 
SRCS = main.cpp \
	Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
