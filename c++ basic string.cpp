#include <iostream>
#include <stdio.h> //for using gets () from c .

using namespace std;

int main ()
{
    char name [20];

    cout << "Enter your name :" << " ";

    gets(name); //If use get () don't have to use cin

    cout << "Welcome !" <<endl <<name;

    return 0;
}
