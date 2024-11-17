CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone

all: megaphone

megaphone: megaphone.cpp
	$(CC) $(CXXFLAGS) -o $(NAME) megaphone.cpp

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re