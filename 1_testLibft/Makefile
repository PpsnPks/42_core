# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pphingkh <pphingkh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 23:43:07 by pphingkh          #+#    #+#              #
#    Updated: 2023/10/23 22:50:31 by pphingkh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_tolower.c ft_toupper.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_strlen.c ft_memset.c ft_memcpy.c \
       ft_memmove.c ft_memchr.c ft_memcmp.c ft_bzero.c ft_strdup.c \
       ft_atoi.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strrchr.c \
       ft_strncmp.c ft_strnstr.c ft_calloc.c ft_putchar_fd.c \
       ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c \
       ft_substr.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c \
       ft_striteri.c

BSRCS = 	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $@ $^

bonus: $(OBJS) $(BOBJS)
	ar -rc $(NAME) $^

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus