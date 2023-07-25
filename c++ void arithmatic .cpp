#include <iostream>
#include <conio.h>
using namespace std;


void sum (int a,  int b)
{

    int result= a+b;

    cout  << "The sum is : " << " " << result << endl;

}

void substitution (int a,  int b)
{
    int result = a-b ;

    cout << "The substitution is :" << result<<endl;
}
void divide (float a,  float b)
{
    float result = a/b;

    cout << "The divide  is :" << result<<endl;
}
void multi (int a, int b)
{
    int result = a*b	;

    cout << "The multiplication is :"<< result<<endl;

}

int main()

{
    int a,b;
    cout << "Enter your  values [Max two value ] :";

    cin >> a;

    cin >> b;

    sum (a,b);


    substitution (a,b);

    divide (a,b);

    multi (a,b);

    getch ();
}


