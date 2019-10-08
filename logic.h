#ifndef LOGIC_H_INCLUDED
#define LOGIC_H_INCLUDED
#include <iostream>
using namespace std;

	
bool checkRows(int board[3][3],int player){
	bool won = false;
		for(int i = 0;i<3 && won == false;i = i + 1){
			won = true;
			for(int j = 0;j<3 && won == true;j = j + 1){
				if(board[i][j] != player){
					won = false;
				}
			}		
	}
	return won;
}

bool checkCollums(int board[3][3],int player){
	bool won = false;
		for(int i = 0;i<3 && won == false;i = i + 1){
			won = true;
			for(int j = 0;j<3 && won == true;j = j + 1){
				if(board[j][i] != player){
					won = false;
				}
			}		
	}
	return won;
}

bool checkDiagonal(int board[3][3],int player){
	bool won = false;
	if(board[0][0] == player && board[1][1] == player && board[2][2] == player){
		won = true;
	}else if(board[2][0] == player && board[1][1] == player && board[0][2] == player){
		won = true;
	}
	return won;	
}

bool checkBoard(int board[3][3],int player){
	bool won = false;
		if(checkRows(board,player) == true || checkCollums(board,player) == true || checkDiagonal(board,player) == true){
			won = true;
		}
	return won;	
}

bool checkRemaining(int board[3][3]){
	bool finished = true;
	for(int i = 0;i<3 && finished == true;i = i + 1){
		for(int j = 0;j<3 && finished == true;j = j + 1){
			if(board[i][j] == 0){
				finished = false;
			}	
		}
	}
	
	return !finished;	
}

bool checkAvailable(int board[3][3],int row,int column){
	bool available = true;
	if(board[row][column] != 0){
		available = false;
	}
	return available;
}	
#endif // LOGIC_H_INCLUDED
