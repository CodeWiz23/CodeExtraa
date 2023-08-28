////Create a class which has two data members, one of them can be
//// accessed from anywhere and other can not accessed out of the
//// class. A member function will be used to take value from the
////  user for setting input into data members and a friend
////  function will be used to display those input. Implement the class using an array of objects.
////
#include <iostream>
using namespace std;

class student
{
private :
    int a;
public:
    int b;

    void setvalue (int x, int y)
    {
        a=x;
        b=y;
    }
    friend void display(student s);
};
void display (student s)
{
    cout<< s.a<<endl;
    cout<<s.b<<endl;
    cout<<"__________"<<endl;
}
int main ()
{

    student ob[4];

    ob[0].setvalue(4,5);
    ob[1].setvalue(5,7);
    ob[2].setvalue(8,5);
    ob[3].setvalue(1,7);


    for (int i=0; i<4; i++)
    {
        display(ob[i]);
    }
}
