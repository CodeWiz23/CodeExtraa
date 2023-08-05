
#include <iostream>

using namespace std;

class student
{
public:
    string name ;
    int roll;




    void display1 ()
    {
        cout <<"Your name is : "<<name<<endl;
        cout << "Your roll is : "<<roll<<endl;
    }


};

class parent : public student
{

public :

    float cgpa;
    parent (string x,int y)
    {


        name = x;
        roll=y;

    }

    void display2()
    {
        display1();

        if (roll==79)
        {
            cout<<"Your CGPA is : "<<cgpa;
        }

        else
        {
            cout << "Your CGPA is : "<<"EROR 404";
        }

    }

};
int main ()
{
    string x;

    int y;


    cout<<"Enter your name : ";

    cin>>x;

    cout<<"Enter your Roll : ";

    cin>>y;

    parent ob(x,y);
    ob.cgpa=3.99;

    ob.display2();

    return 0;
}


