#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE ("Testing first player set to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE (game.get_player() == "X");
}

TEST_CASE ("Testing first player set to O")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE (game.get_player() == "O");
}
TEST_CASE ("Testing if there is a tie","veriying board full works")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(8);
	REQUIRE(game.game_over()== true);
	
	REQUIRE(game.get_winner() == "C");
}


TEST_CASE ("testing win by first column", "verification")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(7);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("testing win by second column", "verification")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("testing win by third column", "verification")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("testing win by first row", "verification")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(2);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(3);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("testing win by second row", "verification")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	game.mark_board(1);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("testing win by third row", "verification")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("testing win diagonally top left", "verification")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("testing win diagonally bottom left", "verification")
{
	TicTacToe game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(3);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("testing x_win", "verification")
{
	TicTacToe game;
	TicTacToeManager test;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);

	test.save_game(TicTacToe b);



	REQUIRE(test.manager == 1);


}

TEST_CASE ("testing o_win", "verification")
{
	TicTacToe game;
	TicTacToeManager test;
	game.start_game("O");

	game.mark_board(2);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);

	REQUIRE(test.o == 1);


}

TEST_CASE ("Testing tie of tictacmanager","veriying")
{
	TicTacToe game;
	TicTacToeManager test;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(9);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(8);
	REQUIRE(game.game_over()== true);
	
	REQUIRE(test.t == 1);
}
