#include<iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Board{

private:
    const int rows = 6;
    const int columns = 7;
    char board_position[6][7];
public:
    Board();
    void display_board();
    void add_checker(char c, int row, int col);
    void select_position(char);
};


Board::Board(){
    for(int i=0;i<rows;i++){
           for(int j=0;j<columns;j++){
           board_position[i][j] = ' ';
        }
    }
}

void Board:: display_board(){
     cout<<endl<<"******************* Displaying Current Board Positions ************"<<endl<<endl;
    cout<< "    1  2  3  4  5  6  7"<< endl;
    cout <<"  +--------------------+"<< endl;
    for (int i = 0; i < rows; i++) {
        cout << " " << i << "|" ;
        for (int j = 0; j < columns; j++) {
            cout << "" << board_position[i][j];
            cout << "| ";
        }
        cout << "" << endl;
    }
     cout<<"  +--------------------+"<< endl;
}


void Board::add_checker(char c, int row, int col){
    board_position[row][col] = c;
}

void Board:: select_position(char ch){
   // instead of random position call minmax
    int r = 0;//rand()%rows;
    int c = 0;//rand()%columns;

    if(board_position[r][c]==' '){
       add_checker(ch,r,c);
    }
    cout<<r<<" "<<c<<endl;
}



