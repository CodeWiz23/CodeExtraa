#include <iostream>
using namespace std;
void display (int *n) // * has to use to capture the address value  !

 *n = 20;
 }

int main ()
{
    int x =10;

    cout << "Before calling the function x =" <<x << endl;


    display (&x);
    {
        cout << "After calling the function x =" << x;
    }


    return 0;
}
