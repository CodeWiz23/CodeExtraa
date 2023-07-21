#include <iostream>
using namespace std;

int main ()
{
    int age ;
    cout << "Enter your age :";
    cin >> age;

    if (age<1)
    {
        cout <<"You didn't born !"<<endl;
    }
    else if ((age<18) && (age>0))
    {
        cout << "You can't come to my party !"<<endl;

    }

    else if (age==18)
    {
        cout <<"Get a kid pass for my party !"<<endl;
    }


    if (age>18)
    {
        cout << "You can came to my party !"<<endl;
    }

    return 0;
}
