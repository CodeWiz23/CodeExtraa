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
    return x.getname(); // we have to create a return function before on public and we have to call here with the copy of given ob + previous return function
}

int  main ()
{
    student ob;
    ob.setname("Mursalin");
    string out = display(ob);

    cout << out ;


    return 0;
}
