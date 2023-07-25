#include <iostream>

using namespace std;

int addition (int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

int main ()
{
    int a,b ;

    cout << "Enter two integer value for sum = ";

    cin >>a;

    cin >>b;

    cout << "The total sum is =" << addition (a,b);

    return 0;
}
