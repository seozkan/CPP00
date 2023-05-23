# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 23:10:54 by seozkan           #+#    #+#              #
#    Updated: 2023/05/23 22:46:49 by seozkan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = bank
CC       = g++
RM       = rm -rf
CFLAGS   = -Wall -Wextra -Werror -std=c++98

SRCS     = $(shell find -type f -name "*.cpp")
OBJS     = $(SRCS:.cpp=.o)
INCS     = $(shell find -type f -name "*.hpp")

CYAN     = \033[1;36m
END      = \033[0m
CLEAR    = \033[2K

.cpp.o:
	@printf "$(CLEAR)$(CYAN)Compiling: $<$(END)\r"
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "\n$(NAME) compiled"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
