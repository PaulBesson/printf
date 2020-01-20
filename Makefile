# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: pbesson <pbesson@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/14 14:02:44 by pbesson      #+#   ##    ##    #+#        #
#    Updated: 2019/12/20 20:38:58 by pbesson     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

SRC = 		libft/ft_atoi.c\
			libft/ft_bzero.c\
			libft/ft_calloc.c\
			libft/ft_isalnum.c\
			libft/ft_isalpha.c\
			libft/ft_isascii.c\
			libft/ft_isdigit.c\
			libft/ft_isprint.c\
			libft/ft_itoa.c\
			libft/ft_memccpy.c\
			libft/ft_memchr.c\
			libft/ft_memcmp.c\
			libft/ft_memcpy.c\
			libft/ft_memmove.c\
			libft/ft_memset.c\
			libft/ft_split.c\
			libft/ft_strchr.c\
			libft/ft_strdup.c\
			libft/ft_strjoin.c\
			libft/ft_strlcat.c\
			libft/ft_strlcpy.c\
			libft/ft_strlen.c\
			libft/ft_strmapi.c\
			libft/ft_strncmp.c\
			libft/ft_strnstr.c\
			libft/ft_strrchr.c\
			libft/ft_strtrim.c\
			libft/ft_substr.c\
			libft/ft_tolower.c\
			libft/ft_toupper.c\
			libft/ft_putchar_fd.c\
			libft/ft_putstr_fd.c\
			libft/ft_putendl_fd.c\
			libft/ft_putnbr_fd.c\
			libft/ft_putchar.c\
			libft/ft_putstr.c\
			libft/ft_putnbr.c\
			libft/ft_itoa_base.c\
			libft/ft_memdel.c\
			libft/ft_strjoin_free.c\
			libft/ft_strjoin_free_s1.c\
			libft/ft_strjoin_free_s2.c\
			libft/ft_strdel.c\
			libft/ft_strchr_count.c\
			libft/ft_strchr_set.c\
			libft/ft_itoa_base_ll.c\
			libft/ft_itoa_ll.c\
			libft/ft_substr_free.c\
			sources/ft_itoa_base_flag_x.c\
			sources/ft_printf.c\
			sources/ft_init.c\
			sources/ft_find_flags.c\
			sources/ft_flags_process.c\
			sources/ft_init_2.c\

HEADERS = sources/ft_printf.h
OBJ = ${SRC:.c=.o}
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm
$(NAME) :	$(OBJ) $(HEADERS)
				@ar rc $(NAME) $(OBJ)
all :		${NAME}
%.o: %.c $(HEADERS)
			@$(CC) $(CFLAGS) -o $@ -c $<
clean :
				${RM} -f sources/*.o libft/*.o
fclean :     clean
				rm -f ${NAME}
re : fclean all
.PHONY : all clean fclean re