#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{

    int x,y;

    cout << "Enter the value of x :" ;
    cin >> x;

    cout << "Enter the value of y :";

    cin >> y;

    x += y ;

    cout << "The value of x +=y is : " <<x;

    cout <<endl;

    x -= y ;

    cout << "The value of x -=y is : " <<x;

    cout <<endl;


    x *= y ;

    cout << "The value of x *=y is : " <<x;

    cout <<endl;

    x /= y ;

    cout << "The value of x /=y is : " <<x;

   cout <<endl;

    x %= y ;

    cout << "The value of x %=y is : " <<x;


    getch ();

}



