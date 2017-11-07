#include <iostream>
#include "Board.h"
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));

    Board b1;
   // b1.display_board();

    b1.add_checker('X',0,1);
    b1.add_checker('X',1,2);
    b1.add_checker('0',2,5);
    b1.add_checker('X',3,6);
 //   b1.add_checker('X',4,6);
//    b1.add_checker('0',5,5);


    b1.display_board();

    cout<<endl<<endl<<"is Hori X : "<<b1.call_isLeft('X')<<endl;
    cout<<endl<<endl<<"is Hori 0 : "<<b1.call_isLeft('0')<<endl;

    //b1.display_board();

    return 0;
}
