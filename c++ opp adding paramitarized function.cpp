#include <iostream>
using namespace std;

class student

{
public :

    int roll ;

    float cgpa ;

    void display ()

    {
        cout<< "Student roll ="<<roll <<endl << "Student CGPA =" <<cgp;
    }

    void setvalue (int x, float y)

    {
        roll = x;
        cgpa = y;

    }

};

int main ()
{
    student information;

    information.setvalue (4,3.99);

    information.display();

    return 0;

}


