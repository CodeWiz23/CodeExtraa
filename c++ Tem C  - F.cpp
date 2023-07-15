#include  <iostream>

using namespace std;

int main ()
{

    int Cels,Fahren ;

    cout << "Enter the temperature of Celsius :";

    cin >> Cels;

    Fahren = 1.8 * Cels + 32 ;

    cout << "The conversion on Fahrenheit is : " <<Fahren;

    return 0;


}
