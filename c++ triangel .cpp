#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    int base, height, area;

    cout << "Enter base of triangle :";

    cin>>  base;

    cout <<endl;

    cout << "Enter the height of triangle :";


    cin>> height;

    area = 1.0/2 * base * height; //(1.0) is for making it float int !

    cout << "The area of triangle is  :" << area ;


    getch ();


}
