# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 17:26:42 by gkehren           #+#    #+#              #
#    Updated: 2022/11/12 20:15:15 by gkehren          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES:=	main Harl

NAME:= harl

# ------------------
CC:=c++
CCHPATH:=obj/
CFLAGS:=-Wall -Wextra -Werror -g3 -std=c++98
# ==================

# ----- Colors -----
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
CYAN:="\033[1;35m"
PURPLE:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"
# ==================

# ------ Auto ------
SRC:=$(addprefix $(SRCPATH),$(addsuffix .cpp,$(FILES)))
OBJ:=$(addprefix $(CCHPATH),$(addsuffix .o,$(FILES)))
# ==================
CCHF:=.cache_exists

all: ${NAME}

${NAME}: ${OBJ}
	@echo ${CYAN} " - Compiling $@" $(RED)
	@${CC} ${CFLAGS} ${SRC} -o ${NAME}
	@echo $(GREEN) " - OK" $(EOC)

${CCHPATH}%.o: ${SRCPATH}%.cpp | ${CCHF}
	@echo ${PURPLE} " - Compiling $< into $@" ${EOC}
	@${CC} ${CFLAGS} -c $< -o $@

%.cpp:
	@echo ${RED}"Missing file : $@" ${EOC}

$(CCHF):
	@mkdir $(CCHPATH)
	@touch $(CCHF)

clean:
	@rm -rf ${CCHPATH}
	@rm -f ${CCHF}

fclean:	clean
	@rm -f ${NAME}
	@rm -rf ${NAME}.dSYM/

re:	fclean
	@${MAKE} all

.PHONY:	all clean fclean re
