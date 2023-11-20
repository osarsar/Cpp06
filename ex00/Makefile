SRCS =  main.cpp \
		ScalarConverter.cpp\
		
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = convert

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp ScalarConverter.hpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all