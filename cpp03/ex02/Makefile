# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 13:50:25 by ahamalai          #+#    #+#              #
#    Updated: 2024/06/26 12:43:20 by ahamalai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = fragtrap

FLAGS = -Wall -Wextra -Werror -std=c++11

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp \

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