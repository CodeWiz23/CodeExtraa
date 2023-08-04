#include <iostream>

using namespace std;

class student

{
public:
    char ch ;


    char display()
    {
        return ch;
    }

};

int main ()
{
    student ob;
    ob.ch='J';//This is how we can assassin a value on obj/


    cout<< "Your character is : " <<ob.display();

    return 0;
}

