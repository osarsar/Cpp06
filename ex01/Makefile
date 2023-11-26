SRCS =  main.cpp \
		Serializer.cpp\
		Data.cpp
		
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Serializer

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp Serializer.hpp Data.hpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all