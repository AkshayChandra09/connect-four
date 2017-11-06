#include<iostream>
#include <stdlib.h>
#include <ctime>
#include <string.h>
#include <string>

using namespace std;

class Board{

private:
    const int rows = 6;
    const int columns = 7;
    char board_position[6][7];
    string find_X = "XXXX";
    string find_0 = "0000";

public:
    Board();
    void display_board();
    void add_checker(char c, int row, int col);
    void select_position(char);
    bool isLeft(string check, int x, int y, int count, string finds);
    bool call_isLeft(char player);
    bool isHorizontal(char player);
    bool eachRow(int);
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

bool Board :: call_isLeft(char player){
    string find;
    if(player=='X'){
        find = find_X;
    }
    else if(player=='0'){
        find = find_0;
    }

    for(int i =0; i < 3; i++){
            for(int j=0; j<4; j++){
              if(isLeft("", i,  j, 4, find)){
                return true;
              }
        }
    }
    return false;
}

bool Board :: isLeft(string check, int x, int y, int count, string finds){
    char chk = finds[0];

    if(check==finds){
        return true;
    }

    else if(count > 0){
        count--;
        if(board_position[x][y] == finds[0]){
            check += board_position[x][y];
        }
        return isLeft(check, x+1, y+1, count, finds);
    }

    else
        return false;
}



bool Board::isHorizontal(char player){
    bool status=false;
    for(int i=0;i<rows;i++){
        if(!status){
            cout<<"checking "<<i<<" th row.."<<endl;
            status = eachRow(i);
            cout<<"status "<<status<<endl;
        }
        if(status)
            break;
    }
    if(status){
        return true;
    }
}

bool Board::eachRow(int r){
    int count = 0;
    string check="";
    for(int i = 0; i< columns;i++){
        if(board_position[r][i] == 'X'){
            count++;
            check += board_position[r][i];
        }
        else{
          count=0;
        }
        if(count == 4 && check=="XXXX"){
           break;
        }
    }

    if(count==4)
        return true;

    else
        return false;
}
