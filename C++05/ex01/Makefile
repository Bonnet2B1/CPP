# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 16:59:43 by edelarbr          #+#    #+#              #
#    Updated: 2024/06/11 18:14:17 by edelarbr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	Maggots

# ------------------------------ Sources -----------------------------

SRCS		:=	main.cpp \
				Bureaucrat.cpp \
				Form.cpp \

OBJ_DIR		:=	.objs
OBJS		:=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

# ------------------------------ Flags -------------------------------

ifeq ($(shell uname -s), Darwin)
	CXX := c++-11
else
	CXX := g++
endif

CXXFLAGS		:=	-Wall -Wextra -Werror -std=c++98
RM			:=	rm -rf
SHELL		:= /bin/bash

$(OBJ_DIR)/%.o :%.cpp
	@ mkdir -p $(dir $@)
	@ $(CXX) $(CXXFLAGS) -c $< -o $@

# ------------------------------ Colors ------------------------------

CLR_RMV		:=	\033[0m
RED			:=	\033[1;31m
GREEN		:=	\033[1;32m
YELLOW		:=	\033[1;33m
BLUE		:=	\033[1;34m
CYAN 		:=	\033[1;36m

# ------------------------------ Compilation -------------------------

all:			$(NAME)

$(NAME):		$(OBJS)
				@ echo -e "$(GREEN)Compilation $(CLR_RMV)of $(YELLOW)$(NAME) $(CLR_RMV)..."
				@ $(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
				@ echo -e "$(YELLOW)$(NAME) $(GREEN)created $(CLR_RMV)✔️"



# -------------------------------- Rules -----------------------------

clean:
				@ $(RM) $(OBJ_DIR)
				@ echo -e "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:			clean
				@ $(RM) $(NAME)
				@ echo -e "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:				fclean all

.PHONY:			all bonus clean fclean re
