#include <iostream>

using namespace std;

class student
{
public :

    int roll ;

    float cgpa;

    student (int x, float y)
    {
        cout <<"Enter student roll :";

        cin >>x;

        cout <<"Enter student CGPA :";

        cin >> y;

        roll = x;

        cgpa =y;

    }


    void display ()
    {

        cout << "The roll is :" << roll<< endl<< "The CGPA is :" <<cgpa;
    }

    student ()

    {
        cout << "Constructor overloading"<<endl;
    }

};

int main ()
{
    student ob ;

    student robin (4,3.99);

    robin.display();

    return 0;
}
