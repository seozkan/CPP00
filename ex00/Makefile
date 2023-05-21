# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seozkan <seozkan@student.42kocaeli.com.tr> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 20:32:25 by seozkan           #+#    #+#              #
#    Updated: 2023/05/21 21:54:02 by seozkan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= megaphone
CC			:= c++
RM			:= rm -f
CFLAGS		= -Wall -Wextra -Werror -std=c++98

SRC			=	megaphone.cpp
OBJ			=	$(SRC:.cpp=.o)

END			:= \033[0m
RED			:= \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
CYAN 		:= \033[1;36m

.cpp.o:
	@ echo "$(YELLOW)Compiling: $(END)$<"
	@ ${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) -o $(NAME) $(OBJ)
	@ echo "$(CYAN)$(NAME) created$(END) ✔️"

clean:
	@ ${RM} $(OBJ) $(OBJ_BONUS)
	@ echo "$(RED)Deleting $(CYAN)$(NAME) $(END)objs ✔️"

fclean: clean
	@ ${RM} $(NAME)
	@ echo "$(RED)Deleting $(CYAN)$(NAME) $(END)binary ✔️"

re: fclean all

.PHONY: all clean fclean re