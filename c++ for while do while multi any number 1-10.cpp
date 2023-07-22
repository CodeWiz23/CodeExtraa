#include <iostream>

using namespace std;


int main ()
{
//for loop
    int a, i;

    cout << "Enter the number which multiplication you want :";

    cin >> a;

    for (i=1; i<=100; i++)
    {
        cout <<a<<"x"<<i <<"="<<a*i<<endl;
    }


//while loop

    int i, a;

    cout << "Enter the number which multiplication you want :";

    cin >> a;

    i =1;

    while (i<=10)
    {
        cout <<a<<"x"<<i <<"="<<a*i<<endl;
        i++;
    }

//do while loop

    int i, a;

    cout << "Enter the number which multiplication you want :";

    cin >> a;

    i =1;
    do
    {
        cout <<a<<"x"<<i <<"="<<a*i<<endl;
        i++;
    }
    while (i<=10);



    return 0;
}
