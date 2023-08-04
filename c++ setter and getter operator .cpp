#include <iostream>

using namespace std;

class student

{
private :
    string name;
    int roll;

public:
    void setname (string x)
    {
        name = x;
    }

      void setname (int y)
    {

        roll = y;
    }

    string getname()
    {
        return name;

    }
    int getname2()
    {

        return roll;

    }

};

int main ()
{

    student s1;
    s1.setname("Mursalin");
    s1.getname();
    cout << s1.getname()<<endl;

    student s2;
    s2.setname(5);
    s2.getname2();
    cout << s2.getname2();
}
