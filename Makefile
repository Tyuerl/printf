# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: glavette <glavette@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/26 04:52:21 by glavette          #+#    #+#              #
#    Updated: 2021/12/26 05:39:04 by glavette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	printf.c putprcnt.c putstr.c putunbr.c putxdm_low.c putxdm_upp.c cell_code.c
NAME		=	libftprintf.a
GCC			= 	gcc
FLAGS		=	-Wall -Wextra -Werror -c
OBJS		=	$(SRCS:.c=.o)
INCLUDES	= -I ./indlude
HEAD		= ./include/printf.h

.PHONY: all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS) 
			$(GCC) $(FLAGS) $(INCLUDES) $(SRCS)
clean:	
			rm -f ${OBJS}
fclean:		clean
			rm -f $(NAME)
re:			fclean all