#include <iostream>

using namespace std;


int main ()
{
    int a = 5;

    int* b = &a;

    cout << "The address of a is :"<<&a <<endl;

    cout << "The address of b is :"<<b <<endl;

    cout << "The Value of b is   :"<<*b <<endl;

    return 0;
}
