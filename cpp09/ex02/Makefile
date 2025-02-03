TARGET = PmergeMe

FLAGS = -Wall -Wextra -Werror -std=c++17

SRCS = main.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
		c++ $(FLAGS) -o $@ $^

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f $(TARGET)

re:	fclean all