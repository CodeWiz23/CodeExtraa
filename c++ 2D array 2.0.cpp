#include <iostream>

using namespace std;

int main ()
{

    int row,col;
    int A[2][3];

    A [0][0] = 1;

    A [0][1] = 2;
    A [0][2] = 3;

    A [1][0] = 4;
    A [1][1] = 5;
    A [1][2] = 6;



    for (row=0; row<2; row++)
    {


        for (col=0; col<3; col++)
        {
            cout <<A[row][col]<< "";
        }
            cout <<endl;


    }


    return 0;
}
