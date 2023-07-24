#include <iostream>

using namespace std;

int main ()
{

    int row,col;
    int A[2][3];

    cout << "Enter your elements for the matrix :"<<endl;

    for (row=0; row<2; row++)
    {


        for (col=0; col<3; col++)
        {
            cout << "A["<<row<<"]["<<col<<"] = ";
            cin>>A[row][col] ;
        }
    }

    for (row=0; row<2; row++)
    {


        for (col=0; col<3; col++)
        {
            cout << "A["<<row<<"]["<<col<<"] =" << A[row][col]<< " ";
        }
        cout <<endl;


    }
}
