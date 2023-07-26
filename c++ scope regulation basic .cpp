#include <iostream>
using namespace std;

int x = 20;
int main ()
{
    int x = 10;

    cout << :: x <<endl; // Result will be 20 for using scope regulation operator :: ; It will print the global variable x !w

    return 0;
}

