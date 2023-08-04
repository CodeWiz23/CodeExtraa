#include <iostream>

using namespace std;

class student

{
public:
    string name ;

    string display()
    {
        return name;
    }

};

int main ()
{

    student ob;

    ob.name;
    cout <<"Enter your name : ";
    cin >>ob.name;

    ob.display();

    cout <<"Your name is : "<<ob.display();



}
