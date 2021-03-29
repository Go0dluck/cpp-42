NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
FLAG = -Wall -Werror -Wextra -I .

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAG) -o $(NAME) $(OBJS)

%.o : %.cpp
	clang++ $(FLAG) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
