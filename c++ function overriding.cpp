#include <iostream>
using namespace std;
class student
{

public:
    void display()
    {
        cout << "Student Class is called"<<endl;
    }

};
class teacher : public student
{

public:
    void display()
    {
        cout << "Teacher Class is called"<<endl;
    }

};
class person : public teacher
{
public:
    void display()
    {
        cout << "Person Class is called"<<endl;
    }


};

int main ()
{
    student ob;
    ob.display();

    teacher ob2;
    ob2.display();

    person ob3;
    ob3.display();

    return 0;


}
