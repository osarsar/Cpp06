SRCS =  main.cpp \
		Serialization.cpp\
		
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Serialization

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp Serialization.hpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all