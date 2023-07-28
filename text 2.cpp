#include <iostream>

using namespace std;


void display (int *p)
{
    *p = 200;
    cout << "After changing the value of x :" <<*p;
}

int main ()
{

    int x =10;

    cout <<"Before changing the value of x :"<<x<<endl;

    display (&x);

    return 0;
}
