#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE ("Testing first player set to X")
{
	tictactoe3 game;
	game.start_game("X");
	REQUIRE (game.get_player() == "X");
}

TEST_CASE ("Testing first player set to O")
{
	tictactoe3 game;
	game.start_game("O");
	REQUIRE (game.get_player() == "O");
}
TEST_CASE ("Testing if there is a tie","veriying board full works")
{
	tictactoe3 game;
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
	tictactoe3 game;
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
	tictactoe3 game;
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
	tictactoe3 game;
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
	tictactoe3 game;
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
	tictactoe3 game;
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
	tictactoe3 game;
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
	tictactoe3 game;
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

TEST_CASE ("testing win diagonally bottom right", "verification")
{
	tictactoe3 game;
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
TEST_CASE ("Testing first player set to X in 4X4")
{
	TicTacToe4 game;
	game.start_game("X");
	REQUIRE (game.get_player() == "X");
}

TEST_CASE ("Testing first player set to O in a 4X4")
{
	TicTacToe4 game;
	game.start_game("O");
	REQUIRE (game.get_player() == "O");
}
TEST_CASE ("test win by first column in a 4X4")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);
	REQUIRE(game.game_over()== false);
	game.mark_board(13);

	REQUIRE(game.game_over()== true);
}

TEST_CASE ("test win by second column 4X4")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	game.mark_board(10);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);
	REQUIRE(game.game_over()== false);
	game.mark_board(14);

	REQUIRE(game.game_over()== true);
}
TEST_CASE ("test win by third column in 4X4")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(7);
	REQUIRE(game.game_over()== false);
	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	game.mark_board(11);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);
	REQUIRE(game.game_over()== false);
	game.mark_board(15);

	REQUIRE(game.game_over()== true);
}
TEST_CASE ("test win by fourth column 4X4")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);
	REQUIRE(game.game_over()== false);
	game.mark_board(10);
	REQUIRE(game.game_over()== false);
	game.mark_board(12);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(16);

	REQUIRE(game.game_over()== true);
}

TEST_CASE("testing row 1 win in a 4X4")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over()== false);
	
	game.mark_board(2);
	REQUIRE(game.game_over()== false);

	game.mark_board(5);
	REQUIRE(game.game_over()== false);

	game.mark_board(3);
	REQUIRE(game.game_over()== false);

	game.mark_board(9);
	REQUIRE(game.game_over()== false);

	game.mark_board(11);
	REQUIRE(game.game_over()== false);

	game.mark_board(13);
	REQUIRE(game.game_over()== true);
}

TEST_CASE("testing row 2 win in a 4X4")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over()== false);
	
	game.mark_board(3);
	REQUIRE(game.game_over()== false);

	game.mark_board(6);
	REQUIRE(game.game_over()== false);

	game.mark_board(5);
	REQUIRE(game.game_over()== false);

	game.mark_board(10);
	REQUIRE(game.game_over()== false);

	game.mark_board(9);
	REQUIRE(game.game_over()== false);

	game.mark_board(14);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("testing row 3 win in a 4X4")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over()== false);
	
	game.mark_board(4);
	REQUIRE(game.game_over()== false);

	game.mark_board(7);
	REQUIRE(game.game_over()== false);

	game.mark_board(5);
	REQUIRE(game.game_over()== false);

	game.mark_board(11);
	REQUIRE(game.game_over()== false);

	game.mark_board(9);
	REQUIRE(game.game_over()== false);

	game.mark_board(15);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("testing row 4 win in a 4X4")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	
	game.mark_board(5);
	REQUIRE(game.game_over()== false);

	game.mark_board(8);
	REQUIRE(game.game_over()== false);

	game.mark_board(6);
	REQUIRE(game.game_over()== false);

	game.mark_board(12);
	REQUIRE(game.game_over()== false);

	game.mark_board(7);
	REQUIRE(game.game_over()== false);

	game.mark_board(16);
	REQUIRE(game.game_over()== true);
}

TEST_CASE("testing win diagonally top left in 4X4", "verification")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(11);
	REQUIRE(game.game_over()== false);
	game.mark_board(13);
	REQUIRE(game.game_over()== false);
	game.mark_board(16);

	REQUIRE(game.game_over()== true);
}
TEST_CASE("testing win diagonally top right in 4X4", "verification")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(7);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(10);
	REQUIRE(game.game_over()== false);
	game.mark_board(12);
	REQUIRE(game.game_over()== false);
	game.mark_board(13);

	REQUIRE(game.game_over()== true);
}
TEST_CASE ("Testing if there is a tie in 4X4","veriying board full works")
{
	TicTacToe4 game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(12);
	REQUIRE(game.game_over() == false);

	game.mark_board(16);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(13);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(10);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(11);
	REQUIRE(game.game_over() == false);
	
	game.mark_board(15);
	REQUIRE(game.game_over()== false);

	game.mark_board(14);
	REQUIRE(game.game_over()== true);
	
	REQUIRE(game.get_winner() == "C");
}
TEST_CASE("testing the manager get_winner_total")
{
	TicTacToeManager manager;
	unique_ptr<TicTacToe> game1 = make_unique<tictactoe3>();

	unique_ptr<TicTacToe> game2 = make_unique<tictactoe3>();
	
	unique_ptr<TicTacToe> game3 = make_unique<tictactoe3>();
	int O = 0, X = 0, T= 0;

	game1->start_game("X");
	game1->mark_board(1);
	game1->mark_board(2);
	game1->mark_board(4);
	game1->mark_board(3);
	game1->mark_board(7);

	if (game1->game_over())
	{
		manager.save_game(game1);
	}

	game2->start_game("O");
	game2->mark_board(1);
	game2->mark_board(2);
	game2->mark_board(4);
	game2->mark_board(3);
	game2->mark_board(7);

	if (game2->game_over())
	{
		manager.save_game(game2);
	}
	
	game3->start_game("X");
	game3->mark_board(1);
	game3->mark_board(2);
	game3->mark_board(3);
	game3->mark_board(4);
	game3->mark_board(5);
	game3->mark_board(7);
	game3->mark_board(6);
	game3->mark_board(9);
	game3->mark_board(8);
	
	if (game3->game_over())
	{
		manager.save_game(game3);
	}
	
	manager.get_winner_total(O, X, T);

	REQUIRE(X == 1);
	REQUIRE(O == 1);
	REQUIRE(T == 1);
}
TEST_CASE("testing the manager get_winner_total in 4X4")
{
	TicTacToeManager manager;
	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe4>();

	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe4>();
	
	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe4>();
	int O = 0, X = 0, T= 0;

	game1->start_game("X");
	game1->mark_board(1);
	game1->mark_board(5);
	game1->mark_board(2);
	game1->mark_board(6);
	game1->mark_board(3);
	game1->mark_board(7);
	game1->mark_board(4);

	if (game1->game_over())
	{
		manager.save_game(game1);
	}

	game2->start_game("O");
	game2->mark_board(1);
	game2->mark_board(5);
	game2->mark_board(2);
	game2->mark_board(6);
	game2->mark_board(3);
	game2->mark_board(7);
	game2->mark_board(4);

	if (game2->game_over())
	{
		manager.save_game(game2);
	}
	
	game3->start_game("X");
	game3->mark_board(1);
	game3->mark_board(4);
	game3->mark_board(5);
	game3->mark_board(8);
	game3->mark_board(9);
	game3->mark_board(12);
	game3->mark_board(16);
	game3->mark_board(13);
	game3->mark_board(2);
	game3->mark_board(3);
	game3->mark_board(7);
	game3->mark_board(6);
	game3->mark_board(10);
	game3->mark_board(11);
	game3->mark_board(15);
	game3->mark_board(14);

	
	if (game3->game_over())
	{
		manager.save_game(game3);
	}
	
	manager.get_winner_total(O, X, T);

	REQUIRE(X == 1);
	REQUIRE(O == 1);
	REQUIRE(T == 1);
}