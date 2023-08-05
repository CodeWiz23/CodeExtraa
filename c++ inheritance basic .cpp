#include <iostream>

using namespace std;

class student
{
public:
    string name ;
    int roll;

    student (string x, int y)
    {
        name = x;
        roll = y;
    }

    void display ()
    {
        cout <<name<<endl<<roll;
    }


};
int main ()
{
    student ob("Mursalin",25);
    ob.display();

   return 0;
}



