#include <iostream>

#include <conio.h>

using namespace std;

int main ()
{

    int num1, num2;


    cout << "Enter your numbers for sum :";

    cin>> num1>>num2;

    int sum = num1 + num2 ;

    cout<< "Your sum  is : " << sum ;

    cout <<endl;



    cout << "Enter your numbers for substitution :";

    cin>> num1>>num2;

    int sub = num1 - num2 ;

    cout<< "Your substitution is : " << sub ;



    cout <<endl;

    cout << "Enter your numbers for multiplication :";

    cin>> num1>>num2;

    int multi = num1 * num2 ;

    cout<< "Your multiplication is : " << multi ;



    cout <<endl;



    cout << "Enter your numbers for division :";

    cin>> num1>>num2;

    double div = (float)  num1 / num2 ; //It's called typecasting . To convert one data type into another !

    cout<< "Your division is : " << div;

    cout <<endl;



    cout << "Enter your numbers for modules :";

    cin>> num1>>num2;

    int mod =  num1 % num2 ;

    cout<< "Your modules  is : " << mod;



    getch();


}


