# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: longuyen <longuyen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/10 21:27:53 by longuyen          #+#    #+#              #
#    Updated: 2015/01/10 21:27:56 by longuyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=		g++
CFLAGS		=		-c -Wall -Wextra -Werror 

SOURCES		=		GameManager.Class.cpp\
					Unit.Class.cpp\
					Player.Class.cpp\
					Mob.Class.cpp\
					Bullet.Class.cpp\
					main.cpp

OBJECTS		=		$(SOURCES:.cpp=.o)
EXECUTABLE	=		ft_retro

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(OBJECTS) -lncurses -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(EXECUTABLE)

re:	fclean all

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
