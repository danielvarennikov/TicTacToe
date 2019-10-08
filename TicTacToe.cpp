/*
 * TicTacToe.cpp
 * 
 * Copyright 2019  <pi@raspberrypi>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include "drawer.h"
#include "logic.h"
using namespace std;
int main(int argc, char **argv)
{
	int board[3][3] = {{0,0,0},
					   {0,0,0},
					   {0,0,0}};
	int player = 1;
	bool victory = false;
	int row;
	int collumn;
	drawBoard();
	paintBoard(board);
	while(checkRemaining(board) == true && victory == false){
						   
	cout<<"Player "<<player<<" it is your turn!"<<endl;
	cout<<"Where do you want to place your next move?"<<endl;
	
	bool available = false;
	while(available == false){
		cout<<"Enter Row: ";
		cin>>row;
		cout<<"---------"<<endl;
		cout<<"Enter Collumn: ";
		cin>>collumn;
		cout<<"---------"<<endl;
		cout<<""<<endl;
		available = checkAvailable(board,row,collumn);
		if(available == false){
			cout<<"Spot taken! Choose again"<<endl;
		}
	}
	board[row][collumn] = player;
	paintBoard(board);	
	victory = checkBoard(board,player);
	if(victory == true){
		cout<<"Congradulations! Player "<<player<<" won!"<<endl;
	}
	//Switch players
	if(player == 1){
		player = 2;
	}else{
		player = 1;
	}
	}
	
	if(victory == false){
		cout<<"It's a tie!"<<endl;
	}
	return 0;
}

