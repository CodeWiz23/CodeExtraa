//Create a class which has two data members, one of them can be accessed from anywhere and
//other can not accessed out of the class. A member function will be used to take value
// from the user for setting input into data members and a friend function will be used
// to display those input. Implement the class using an array of objects.

#include <iostream>
using namespace std;

class student
{
private :
    int num1;
public:
    int num2;
    student (int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    friend void show_value(student s);
};
void show_value(student s)
{
    cout<< "NUMBER 1 is : "<< s.num1<<endl<< "NUMBER 2 is : "<<s.num2;

}
int main ()
{
    int a,b;
    cout<< "Enter your number 1 value : ";
    cin>>a;
    cout<< "Enter your number 2 value : ";
    cin>>b;
    student ob[1]=
    {
        student(a,b),

    };

        show_value (ob[1]);

    return 0;
}
