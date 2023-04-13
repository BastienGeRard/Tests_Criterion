##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

CC 	= 	gcc

CFLAGS 	=  	-Iinclude -Wall -Wextra -Wshadow

CHM     =	src/

SRC 	=  	$(CHM)main.c   \
			$(CHM)my_blackjack.c   \
			$(CHM)init_struct_blackjack.c   \
			$(CHM)welcome_message.c   \
			$(CHM)pull_card.c   \
			$(CHM)show_cards.c   \
			$(CHM)scan_choice_player.c   \
			$(CHM)game_loop.c   \
			$(CHM)calcul_score.c   \
			$(CHM)handle_dealer.c   \
			$(CHM)check_over_bj.c   \
			$(CHM)user_pull_card.c   \
			$(CHM)win_loose_cond.c   \
			$(CHM)is_blackjack.c   \
			$(CHM)print_blackjack.c   \

SRCTEST =	$(CHM)my_blackjack.c   \
			$(CHM)init_struct_blackjack.c   \
			$(CHM)welcome_message.c   \
			$(CHM)pull_card.c   \
			$(CHM)show_cards.c   \
			$(CHM)scan_choice_player.c   \
			$(CHM)game_loop.c   \
			$(CHM)calcul_score.c   \
			$(CHM)handle_dealer.c   \
			$(CHM)check_over_bj.c   \
			$(CHM)user_pull_card.c   \
			$(CHM)win_loose_cond.c   \
			$(CHM)is_blackjack.c   \
			$(CHM)print_blackjack.c   \

TEST 	=	tests/test_check_over_bj.c   \
			tests/test_game_loop.c   \
			tests/test_handle_dealer.c   \
			tests/test_init_struct_bj.c   \
			tests/test_blackjack.c   \
			tests/test_pull_card.c   \
			tests/test_scan_choice_player.c   \
			tests/test_show_cards.c   \
			tests/test_user_pull_card.c   \
			tests/test_welcome_message.c   \
			tests/test_win_loose_cond.c   \

NAME 	= my_blackjack

NAMETEST = 	unit_tests

OBJ 	=	$(SRC:%.c=%.o)

OBJTEST = 	$(SRCTEST:%.c=%.o)

.c.o	:
	@$(CC) $(CFLAGS) $(INCL) -c $< -o $@
	@printf " \033[34m[Compilation]\033[39m %s\n" $<

all	:	$(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)
	@printf "\n \033[33m[Message]\033[39m Compilation done\n"

tests_run	:	$(OBJTEST)
	@$(CC) $(OBJTEST) $(TEST) -o $(NAMETEST) $(LDFLAGS) -lcriterion

	@printf "\n \033[33m[Message]\033[39m Compilation of tests done\n"

clean	:
	@$(RM) -f $(OBJ)
	@printf " \033[31m[Delete] \033[39m%s\n" $(OBJ)

fclean	:	clean
	@$(RM) -f $(NAME)
	@$(RM) -f $(NAMETEST)
	@printf "\n \033[31m[Delete] \033[39m%s\n" $(NAME)
	@printf " \033[31m[Delete] \033[39m%s\n" $(NAMETEST)

re	:	fclean all

debug:	CFLAGS += -g
debug:	re

.PHONY 	= 	all clean fclean re
