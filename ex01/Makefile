NAME	= FormUpMaggots

CC		= c++ -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp Bureaucrat.cpp Form.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

good: all clean

.PHONY: all clean fclean re
