//Name : A.R.M Mursalin kabir
//Roll: 22235103079

#include <iostream>
using namespace std;
class CSE
{
private:
    int intValue;
    double doubleValue;
    char charValue;

public:
    CSE() : intValue(0), doubleValue(0.0), charValue('\0') {}


    void setValue(int intValue, double doubleValue, char charValue)
    {
        this->intValue = intValue;
        this->doubleValue = doubleValue;
        this->charValue = charValue;
    }


    void displayInfo() const
    {
        cout << "Integer value: " << intValue << std::endl;
        cout << "Double value: " << doubleValue << std::endl;
        cout << "Character value: " << charValue << std::endl;
    }
};


int main()
{
    CSE object1;
    object1.displayInfo();

    int userInt;
    double userDouble;
    char userChar;

    cout << "Enter an integer value: ";
    cin >> userInt;
    cout << "Enter a double value: ";
    cin >> userDouble;
    cout << "Enter a character value: ";
    cin >> userChar;

    CSE object2;
    object2.setValue(userInt, userDouble, userChar);
    object2.displayInfo();

    return 0;
}

