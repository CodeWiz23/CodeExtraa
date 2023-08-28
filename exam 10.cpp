//Construct a class named CSE that has three data members of type integer,
//double and character. A no-arg constructor sets default values for the data members as
// 0, 0.0 and ‘\0’ respectively. A setvalue() member function with three arguments is used
//  to assign a user given value. Use a non member function to display the values of 5 objects
//   using an array of objects. Write a test function to implement the class.

#include <iostream>

using namespace std;

class CSE

{
public:

    int a;
    double b;
    char c;

    CSE ()
    {
        a = 0;
        b = 0.0;
        c = '/0';

    }
    setvalue(int x, double y, char z)
    {
        a = x;
        b = y;
        c = z;
    }
};


int display(CSE s)
{
    cout<<s.a<<" "<<s.b<<" "<<s.c<<endl;
}

int main ()
{
    CSE ob[5];

    ob[0].setvalue(9,9.8,'P');
    ob[1].setvalue(9,9.8,'P');
    ob[2].setvalue(9,9.8,'P');
    ob[3].setvalue(9,9.8,'P');
    ob[4].setvalue(9,9.8,'P');

    for (int i =0; i<5; i++)
    {


        display(ob[i]);
    }


}

