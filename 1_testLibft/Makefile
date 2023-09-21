# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 23:43:07 by pphingkh          #+#    #+#              #
#    Updated: 2023/09/21 19:18:15 by pphingkh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -c -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c\
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c\
		ft_strchr.c ft_strlcpy.c ft_strrchr.c\
		ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c\
		ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c\
		
OBJS = $(SRC:.c=.o)
INCLUDE = -I./includes
TARGET = libft.a

all:$(TARGET)

$(TARGET):$(OBJS)
	ar rc $(TARGET) $(OBJS)
	ranlib $(TARGET)

$(OBJS):$(SRC)
	$(CC) $(FLAGS) $(INCLUDE) $(SRC)

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(TARGET)

re:fclean all