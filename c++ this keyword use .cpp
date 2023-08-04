#include <iostream>
using namespace std;

class student
{
private:

    string name ;

public:

    void setname(string name)
    {
        this ->  name = name;
    }


    string getname ()
    {
        return name;
    }
};

string display (student x)
{
    return x.getname();
}

int  main ()
{
    student ob;
    ob.setname("Mursalin");
    string out = display(ob);

    cout << out ;


    return 0;
}
