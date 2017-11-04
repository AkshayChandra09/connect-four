#include <iostream>
#include "Board.h"
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
    b1.add_checker('X',1,1);
    b1.add_checker('X',2,2);
    b1.add_checker('X',3,3);

    b1.display_board();
    cout << "Hello world!" << endl;
    return 0;
}
