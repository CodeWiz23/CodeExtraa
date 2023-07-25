#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    while (1)
    {
    int guess,randomNumber;

    cout << "Enter your guess number 1 to 5 :" << " ";
    cin >> guess;


    randomNumber = rand () %5 +1 ;


    if ( guess==randomNumber )

    {
        cout <<"You have won !";
    }

    else
    {
        cout << "You have lost !" <<endl;
        cout << "The random number was : " <<randomNumber <<endl;
    }
    }
    return 0;
}

