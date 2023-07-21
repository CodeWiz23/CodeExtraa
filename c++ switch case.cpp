#include <iostream>
using namespace std;

int main ()
{
    int age ;
    cout << "Enter your age :";
    cin >> age;

    switch (age)
    {


    case (0):

        cout << "You are not born !" <<endl;
        break ;

    case (10):

        cout << "You are a boy !"<<endl;
        break ;

    case (13):

        cout << "You are a teen !"<<endl;
        break ;

    case (20):

        cout << "You are an adult !"<<endl;
        break ;

    case (60):

        cout << "You are an old !"<<endl;
        break ;

    default :
        cout << "No special cases !"<<endl;
        break;


    }
    cout << "You are welcome for using my code !"<<endl;
    return 0;
}


