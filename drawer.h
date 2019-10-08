#ifndef DRAWER_H_INCLUDED
#define DRAWER_H_INCLUDED

#include <iostream>
using namespace std;


	
void paintBoard(int board[3][3]){
	for(int i = 0;i<3;i = i + 1){
		cout<<"\t -----------"<<endl;
		for(int j = 0;j<3;j = j + 1){
			if(j == 0){
				if(board[i][j] == 0){
					cout<<"\t|   |";
				}else if(board[i][j] == 1){
					cout<<"\t| x |";
				}else{
					cout<<"\t| 0 |";
				}
			}else{
				if(board[i][j] == 0){
					cout<<"   |";
				}else if(board[i][j] == 1){
					cout<<" x |";
				}else{
					cout<<" 0 |";
				}
			}	
		}
		cout<<""<<endl;	
	}
	cout<<"\t -----------"<<endl;
	cout<<""<<endl;
}

void drawBoard(){
	cout<<" ▬▬▬▬▬▬▬▬▬▬ஜ۩۞۩ஜ▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
	cout<<"Welcome to the TIC TAC TOE game!"<<endl;
	cout<<" ▬▬▬▬▬▬▬▬▬▬ஜ۩۞۩ஜ▬▬▬▬▬▬▬▬▬▬▬▬▬▬﻿"<<endl; 
}


#endif // DRAWER_H_INCLUDED
