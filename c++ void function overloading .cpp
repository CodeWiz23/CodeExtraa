#include <iostream>
#include <conio.h>
using namespace std;


void sum (int a,  int b)
{

    int result= a+b;

    cout  << "The sum is : " << " " << result << endl;

}

void sum (int a,  int b, int c)
{

    int result= a+b+c;

    cout  << "The sum is : " << " " << result << endl;

}


int main()

{
    int a,b,c;

    cout << "Enter your  values [Max two value ] :";

    cin >> a;

    cin >> b;

    cin >>c;

    sum (a,b);
    sum (a,b,c);
    return 0;
}
