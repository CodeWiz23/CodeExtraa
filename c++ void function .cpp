#include <iostream>

using namespace std;


void addition (int a, int b )
{
    int sum;
    sum = a+b;

    cout << "Addition =" <<" "<< sum <<endl;
}
int main ()
{
    addition(10,20);
    addition(30,40);
    addition(50,60);


    return 0;
}

