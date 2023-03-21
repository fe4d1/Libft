# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cidiaz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 20:47:40 by cidiaz            #+#    #+#              #
#    Updated: 2023/03/21 18:16:18 by cidiaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


CC = gcc
CC_FLAGS = -Wall -Wextra -Werror

SRCS = \
  ft_atoi.c \
  ft_bzero.c \
  ft_calloc.c \
  ft_isalnum.c \
  ft_isalpha.c \
  ft_isascii.c \
  ft_isdigit.c \
  ft_isprint.c \
  ft_itoa.c \
  ft_memchr.c \
  ft_memcmp.c \
  ft_memcpy.c \
  ft_memmove.c \
  ft_memset.c \
  ft_putchar_fd.c \
  ft_putendl_fd.c \
  ft_putnbr_fd.c \
  ft_putstr_fd.c \
  ft_split.c \
  ft_strchr.c \
  ft_strdup.c \
  ft_striteri.c \
  ft_strjoin.c \
  ft_strlcat.c \
  ft_strlcpy.c \
  ft_strlen.c \
  ft_strmapi.c \
  ft_strncmp.c \
  ft_strnstr.c \
  ft_strrchr.c \
  ft_substr.c \
  ft_tolower.c \
  ft_toupper.c \
  ft_strtrim.c 


OBJS_DIR = objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))


all: $(NAME)
$(OBJS_DIR)%.o : $(LIBFT_PATH)%.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Libft Done !"

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
