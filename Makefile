# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glavette <glavette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 17:16:54 by schung            #+#    #+#              #
#    Updated: 2021/12/26 22:43:11 by glavette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libftprintf.a

HEAD 		= include/printf.h

SRC 		= printf.c cell_code.c putprcnt.c putstr.c putunbr.c putxdm_low.c putxdm_upp.c

OBJ_BONUS = ${SRC_BONUS:.c=.o}

OBJ 		= ${SRC:.c=.o}

FLAGS 		= -Wall -Werror -Wextra

GCC 		= gcc

LIBFLAGS 	= ar rc $(NAME)

all:		$(NAME)

%.o: %.c
			$(GCC) $(FLAGS) -c  $< -o $@

$(NAME):	$(OBJ) $(HEAD)   
			$(LIBFLAGS) $(OBJ)

clean:
			rm -f $(OBJ) $(OBJ_BONUS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

bonus:
			$(CC) $(SRC_BONUS)
			$(LIB) $(OBJ_BONUS)
			$(RANLIB)

.PHONY: all clean fclean re