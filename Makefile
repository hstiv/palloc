NAME	=	palft.a

SRC	=	srcs/palloc.c srcs/p_init.c srcs/pfree.c

OBJ	=	obj/palloc.o obj/p_init.o obj/pfree.o

SRCO	=	palloc.o p_init.o pfree.o

INC	=	includes/

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(SRC) -I $(INC)
	@mkdir obj && mv $(SRCO) obj/.
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "---> $@ created!"

all: $(NAME)

clean:
	@rm -rf obj

fclean: clean
	@rm -rf $(NAME)
	@echo "---> $(NAME) deleted!"

re: fclean all
