#include <iostream>

#include <conio.h>

#include <iomanip>

using namespace std;

int main ()
{

    float num1, num2;


    cout << "Enter your numbers for sum :";

    cin>> num1>>num2;

    cout << showpoint;//for  show points

    float sum = num1 + num2 ;

    cout << setw (30)<< "Your sum  is : " << sum ;

    cout <<endl;



    cout << "Enter your numbers for substitution :";

    cin>> num1>>num2;

    cout << noshowpoint; //for no show points

    float sub = num1 - num2 ;

    cout<< setw (30)<< "Your substitution is : " << sub ;



    cout <<endl;

    cout << "Enter your numbers for multiplication :";

    cin>> num1>>num2;


    cout <<setprecision (10);


    float multi = num1 * num2 ;

    cout<< setw (30)<< "Your multiplication is : " << multi ;



    cout <<endl;



    cout << "Enter your numbers for division :";

    cin>> num1>>num2;

    cout <<fixed;//use this for count after (.) on setprecision

    cout <<setprecision (2) ;


    double div = (float)  num1 / num2 ; //It's called typecasting . To convert one data type into another !

    cout<< setw (30) << "Your division is : " << div;

    cout <<endl;







    getch();


}



