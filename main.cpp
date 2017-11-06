#include <iostream>
#include "Board.h"
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));

    Board b1;
    b1.display_board();

   /* for(int i=0;i<3;i++){
        //cout << i << " ";
        b1.select_position('X');
        b1.select_position('0');
    }*/


    b1.add_checker('X',0,0);
    b1.add_checker('0',0,1);
    b1.add_checker('X',0,2);
    b1.add_checker('0',0,3);
    b1.add_checker('X',0,4);
    b1.add_checker('0',0,5);
    b1.add_checker('X',0,6);

    b1.add_checker('0',2,0);
    b1.add_checker('0',2,1);
    b1.add_checker('X',2,2);
    b1.add_checker('X',2,3);
    b1.add_checker('X',2,4);
    b1.add_checker('X',2,5);
    b1.add_checker('0',2,6);


    b1.add_checker('0',3,0);
    b1.add_checker('0',3,1);
    b1.add_checker('X',3,2);
    b1.add_checker('X',3,3);
    b1.add_checker('X',3,4);
    b1.add_checker('X',3,5);
    b1.add_checker('0',3,6);


    b1.add_checker('0',4,0);
    b1.add_checker('0',4,1);
    b1.add_checker('0',4,2);
    b1.add_checker('X',4,3);
    b1.add_checker('X',4,4);
    b1.add_checker('X',4,5);
    b1.add_checker('X',4,6);

    b1.add_checker('0',5,0);
    b1.add_checker('X',5,1);
    b1.add_checker('X',5,2);
    b1.add_checker('X',5,3);
    b1.add_checker('X',5,4);
    b1.add_checker('0',5,5);
    b1.add_checker('X',5,6);


    b1.display_board();

    cout<<"is horizontal: "<<b1.isHorizontal('X')<<endl;

    //b1.display_board();

    return 0;
}
