# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcordero <pcordero@student.42madrid.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 17:13:31 by pcordero          #+#    #+#              #
#    Updated: 2025/07/29 20:41:27 by paapahid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CMP_COMMAND= cc
FLAGS= -Wall -Werror -Wextra
FILES= rush_02.c number_magic.c dict_magic.c functions.c functions01.c
NAME= rush-02
OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CMP_COMMAND) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
