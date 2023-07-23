#include <iostream>

using namespace std;

int main ()
{

    int  marks [5] ;
    cout<<"Enter Students Marks: ";
    cin >> marks [0];

    cin >> marks [1];

    cin >> marks [2];


    cin >> marks [3];

    cin >> marks [4];


    cout << " Marks are :"<<endl;

    for (int i=0; i<5; i++)
    {
        cout <<marks [i]<<endl;;
    }
    return 0;
}

//more
#include <iostream>

using namespace std;

int main ()
{

    int i, marks [5] ;

    for (i = 0; i<5; i++)
    {
        cout << "Enter your marks for students "<<i<< "=";
        cin>> marks [i];

    }

    cout << " Marks are :"<<endl;

    for ( i=0; i<5; i++)
    {
        cout <<marks [i]<<endl;;
    }
    return 0;
}


