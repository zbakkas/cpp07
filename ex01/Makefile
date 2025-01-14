CPP = c++
CFLAGS =  -Wall -Wextra -Werror -std=c++98
FILES = main.cpp 
OBJ=$(FILES:.cpp=.o)
NAME = iter

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o :%.cpp iter.hpp
	$(CPP) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all