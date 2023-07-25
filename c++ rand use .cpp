#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
    int i;
    for (i=0; i<10; i++)

    {
        int randomNumber = rand () ;

        cout << "The random number is ="<<" "<<randomNumber <<endl;
    }
    return 0;
}
