# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 13:29:59 by lbuscaro          #+#    #+#              #
#    Updated: 2025/04/08 13:30:08 by lbuscaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rf

TESTMAIN := test_main.c

GDBMAIN := gdb_main.c
GDBTEST := gdbtest

CFILES := $(wildcard ../*.c)
TESTS := $(patsubst ../%.c,%,$(CFILES))
TESTFILES = $(TESTS:%=%_test.c)
TESTOBJS = $(TESTFILES:%.c=%.o)

FTHEADER = libft.h
LIBFT = libft.a

TESTHEADER = libftest.h
LIBFTEST = libftest.a

all: $(NAME)

$(NAME): $(TESTMAIN) $(LIBFTEST) $(LIBFT)
#	@echo " - Compiling $@s"
	$(CC) $(CFLAGS) $(TESTMAIN) $(LIBFTEST) $(LIBFT) -lbsd -o $(NAME)

gdb: $(GDBMAIN) $(LIBFTEST) $(LIBFT)
#	@echo "Compiling to gdb"
	$(CC) -g $(CFLAGS) $(GDBMAIN) $(LIBFTEST) $(LIBFT) -lbsd -o $(GDBTEST)
	gdb ./$(GDBTEST)

$(LIBFTEST): $(LIBFT) $(TESTOBJS)
#	@echo " - Compiling $@"
	$(AR) $(LIBFTEST) $(TESTOBJS)

$(LIBFT):
#	@echo " - Compiling $@"
	make -C ../
	cp ../$(LIBFT) $(LIBFT)
	cp ../$(FTHEADER) $(FTHEADER)

%.o: %.c
#	@echo " - Creating $@"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(TESTOBJS)
	make clean -C ../

fclean: clean
	$(RM) $(NAME) $(LIBFTEST) $(LIBFT) $(FTHEADER)
	make fclean -C ../

re: fclean all
