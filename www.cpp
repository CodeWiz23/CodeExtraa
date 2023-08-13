//Name : A.R.M Mursalin Kabir
//Roll : 22235103079
//Intake : 51

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

    void setValues(int intValue, double doubleValue, char charValue)
    {
        this->intValue = intValue;
        this->doubleValue = doubleValue;
        this->charValue = charValue;
    }

    int getIntValue() const
    {
        return intValue;
    }

    double getDoubleValue() const
    {
        return doubleValue;
    }

    char getCharValue() const
    {
        return charValue;
    }
};

void displayObjects(const CSE objects[], int count)
{
    for (int i = 0; i < count; ++i)
    {
        cout<< "Object " << i + 1 << " values:" << endl;
        cout << "Integer value: " << objects[i].getIntValue() << endl;
        cout << "Double value: " << objects[i].getDoubleValue() << endl;
        cout << "Character value: " << objects[i].getCharValue() << endl;
        cout << "-----------------------" << endl;
    }
}

int main()
{
    const int numObjects = 5;
    CSE objects[numObjects];

    int intValues[] = {10, 20, 30, 40, 50};
    double doubleValues[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charValues[] = {'A', 'B', 'C', 'D', 'E'};

    for (int i = 0; i < numObjects; ++i)
    {
        objects[i].setValues(intValues[i], doubleValues[i], charValues[i]);
    }

    displayObjects(objects, numObjects);

    return 0;
}

