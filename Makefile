# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crizapat <crizapat@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 14:24:57 by crizapat          #+#    #+#              #
#    Updated: 2024/02/27 10:08:46 by crizapat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libft.a
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
INCLUDE	=	libft.h

SRC			=	ft_isalpha.c \
ft_isalnum.c \
ft_isdigit.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_strlen.c \
ft_strchr.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c

OBJ		=	$(SRC:.c=.o)
all	:	$(NAME)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ) : %.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
	.PHONY : all cleam fclean re