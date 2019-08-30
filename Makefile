NAME	=	libft.a

SRC	=	srcs/palloc.c srcs/p_init.c srcs/pfree.c

OBJ	=	obj/palloc.o obj/p_init.o obj/pfree.o

SRCO	=	palloc.o p_init.o pfree.o

INC	=	includes/

$(NAME):
	@gcc -c $(SRC) -I $(INC)
	@mkdir obj && mv $(SRCO) obj/.
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "---> $@ created!"

all: $(NAME)

test :
	@rm -rf test
	@gcc -o test tests/test1.c -L . -lft
	@./test && echo " <--- test1 result"
	@rm -rf test
	@gcc -o test tests/test2.c -L . -lft
	@./test && echo " <--- test2 result"
	@rm -rf test
	@gcc -o test tests/test3.c -L . -lft
	@./test && echo " <--- test3 result"
	@rm -rf test

clean:
	@rm -rf obj

fclean: clean
	@rm -rf $(NAME)
	@echo "---> $(NAME) deleted!"
	@rm -rf test

re: fclean all
