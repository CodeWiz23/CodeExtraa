#include <iostream>
#include <conio.h>
using namespace std;

class student
{
private :

    string name;

public:
    void setName(string name)
    {
        this ->name  = name;
    }

    string getName()
    {
        return name;
    }


};

string riot (student obj)
{
    return obj.getName();
}

int main ()
{
    string name;

    cout << "Enter your name : " ;
    cin>>name;
    cout<< endl;
    student ob;

    ob.setName(name);

    string result = riot(ob);

    cout << "Your name is : " << result;


    getch();
}
