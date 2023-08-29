//Construct a class named CSE that has three data members of type integer,
// double and character. A no arg constructor set default value for the data
//  members as 0, 0.0 and ‘\0’ respectively. A setvalue() member function with
//   three arguments is used to assign a user given value.
// A function will display all the information of object.
//  Write a test function to implement the class.

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

    void setvalue(int x, double y, char z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display ()
    {
        cout<< a <<endl<<b<<endl<<c;
    }

};

int main ()
{

    CSE ob;
    ob.setvalue(5,9.2,'P');

    ob.display();


}
