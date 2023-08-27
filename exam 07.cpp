//A class name intake 51.
//  A nonmember function will compare the highest CGPA of two students
//   and return which student has highest CGPA.
// A member function will display the student name who
//  got the highest CGPA and his CGPA. Now implement the class.
#include<iostream>

using namespace std;

class intake51
{
public:
    double cgpa;
    string name;

    intake51 (double a, string b)
    {
        cgpa = a;
        name = b;


    }

};

float l(intake51 o,intake51 p)
{
    if(o.cgpa>p.cgpa)
    {
        cout << o.name;
    }
    else {cout<<p.name;}
}

int main ()
{
    intake51 ob1(7.33,"Mursalin");
    intake51 ob2(5.55,"Kabir");

    if(ob1.cgpa>ob2.cgpa)
        {
            cout << ob1.name<<endl<<ob1.cgpa;

        }

    else
    {
        cout << ob2.name <<endl<<ob2.cgpa;
    }
    l(ob1,ob2);
    return 0;
}
