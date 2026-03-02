# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/02 18:40:00 by panne-ro          #+#    #+#              #
#    Updated: 2026/03/02 18:43:14 by panne-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRCS		= ./megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98


all			: $(NAME)

$(NAME)		: $(OBJS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o			: %.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean		:
			rm -f $(OBJS)
			
fclean		: clean
			rm -f $(NAME)
			
re			: fclean all

.PHONY		: all clean fclean re