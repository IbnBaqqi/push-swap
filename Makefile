# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulba <sabdulba@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 14:57:28 by sabdulba          #+#    #+#              #
#    Updated: 2025/01/01 09:24:15 by sabdulba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := cc
RM := rm -rf
FLAG := -Wall -Wextra -Werror

LIBFT := $(LIBFT_DIR)/libft.a
LIBFT_DIR := ./lib/libft
HEADERS := -I ./inc -I $(LIBFT_DIR)/inc
LINK := -L$(LIBFT_DIR) -lft

SRC_DIR := src
#SRC := $(shell ls src/*.c)
SRC := $(shell find $(SRC_DIR) -type f -name "*.c")

OBJ_DIR := obj
OBJ := $(SRC:src%.c=obj%.o)

all: $(NAME)

$(LIBFT): $(LIBFT_DIR)
	make -C $(LIBFT_DIR);

$(LIBFT_DIR):
	git clone https://github.com/IbnBaqqi/libft.git $@;

$(OBJ_DIR):
	mkdir obj

$(NAME):$(LIBFT) $(OBJ_DIR) $(OBJ)
	$(CC) $(OBJ) $(LINK) $(HEADERS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c inc/push_swap.h
	@mkdir -p $(dir $@)
	$(CC) -c $(FLAG) $< -o $@ $(HEADERS)

clean:
	$(RM) $(NAME)
	$(RM) $(OBJ_DIR)/*.o
	$(RM) $(LIBFT_DIR)/obj

fclean: clean
	@rm -f $(NAME)
	$(RM) $(OBJ_DIR)
	$(RM) $(LIBFT_DIR)/libft.a
	$(RM) $(LIBFT_DIR)

re: fclean all