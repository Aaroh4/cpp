# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 10:51:02 by ahamalai          #+#    #+#              #
#    Updated: 2024/06/26 12:43:20 by ahamalai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = violence

FLAGS = -Wall -Wextra -Werror -std=c++11

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp \

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