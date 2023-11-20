SRCS =  main.cpp \
		Base.cpp\
		Identify.cpp\
		
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Base

OBJ =  $(SRCS:.cpp=.o)

%.o : %.cpp Base.hpp A.hpp B.hpp C.hpp Identify.hpp
	@c++ $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $(OBJ) -o $@

all : $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all