#include <iostream>
#include "Board.h"
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));

    Board b1;
    b1.display_board();

    b1.add_checker('X',3,2);
    b1.add_checker('X',3,2);
    b1.add_checker('X',3,2);
    b1.add_checker('X',3,2);
    b1.add_checker('X',3,2);
    b1.add_checker('X',3,2);


    b1.display_board();

    cout<<endl<<endl<<"is Hori X : "<<b1.isVertical('X')<<endl;
    cout<<endl<<endl<<"is Hori 0 : "<<b1.isVertical('0')<<endl;

    //b1.display_board();

    return 0;
}
