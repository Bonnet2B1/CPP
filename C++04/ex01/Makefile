# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 16:59:43 by edelarbr          #+#    #+#              #
#    Updated: 2023/11/28 15:34:14 by edelarbr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	IDoNotWantToSetTheWorldOnFire

# ------------------------------ Sources -----------------------------

SRCS		:=	main.cpp \
				classes/Animal/Animal.cpp \
				classes/Dog/Dog.cpp \
				classes/Cat/Cat.cpp \
				classes/Brain/Brain.cpp

OBJ_DIR		:=	.objs
OBJS		:=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

# ------------------------------ Flags -------------------------------

CXX			:=	c++
CXXFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -g3 #-fsanitize=address
RM			:=	rm -rf

$(OBJ_DIR)/%.o :%.cpp
	@ mkdir -p $(dir $@)
	@ $(CXX) $(CXXFLAGS) $(INC_RL) -c $< -o $@

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
				@ echo "$(GREEN)Compilation $(CLR_RMV)of $(YELLOW)$(NAME) $(CLR_RMV)..."
				@ $(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
				@ echo "$(YELLOW)$(NAME) $(GREEN)created $(CLR_RMV)✔️"



# -------------------------------- Rules -----------------------------

clean:
				@ $(RM) $(OBJ_DIR)
				@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:			clean
				@ $(RM) $(NAME) $(RM)
				@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:				fclean all

.PHONY:			all bonus clean fclean re
