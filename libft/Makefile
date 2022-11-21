# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paalvare <paalvare@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 11:56:23 by paalvare          #+#    #+#              #
#    Updated: 2022/11/21 12:14:19 by paalvare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
BONUS_NAME	= .bonus
HEADER		= libft.h
SRCS		= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memchr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strlcpy.c ft_strnstr.c
INCLUDE		= -I ./
SRCS_BONUS	=	ft_lstnew_bonus.c #ft_lstlast_bonus.c ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c	\
				ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
CFLAGS	= -Werror -Wall -Wextra
RM			= /bin/rm -rf
LIB			= ar -rcs
OBJ			= $(SRCS:.c=.o)
OBJ_BONUS	= $(SRCS_BONUS:.c=.o)

%.o:%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ 

all:		$(NAME)

$(NAME): $(OBJ)
	@$(LIB) $(NAME) $(OBJ)

bonus:	$(BONUS_NAME)

$(BONUS_NAME) : $(OBJ) $(OBJ_BONUS)
	@$(LIB) $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch $@

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)

fclean: 	clean
	@$(RM) $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all bonus clean fclean re
