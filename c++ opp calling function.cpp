#include <iostream>
using namespace std;
class student
{
public :
    int roll ;
    float cgpa ;
    void display ()
    {
        cout<< "Student roll ="<<roll <<endl << "Student CGPA =" <<cgpa;
    }
};
    int main ()
    {
        student information;
        information.roll = 45 ;
        information.cgpa = 3.99;
        information.display();
return 0;


    }

