#include <iostream>
using namespace std;

class MyClass
{
private:
    int privateVar; // Private member variable

public:
    int publicVar; // Public member variable

    MyClass() : privateVar(0), publicVar(0) {} // Constructor

    void setInput(int privateVal, int publicVal)
    {
        privateVar = privateVal;
        publicVar = publicVal;
    }

    friend void displayInput(const MyClass& obj);
};

void displayInput(const MyClass& obj)
{
    cout << "Private Value: " << obj.privateVar <<endl;
    cout << "Public Value: " << obj.publicVar << endl;
}

int main()
{
 int a , b;
        cout << "Enter private value for object "  ": ";
        cin >>a;

        cout << "Enter public value for object "  ": ";
        cin >> b;
    MyClass ob;

    ob.setInout(a,b);
     MyClass ob [1]=

    {


       ob(a,b)
       setinput(ob)

    };

    for (int i = 0; i < 1; ++i)
    {
        cout << "Object " << i + 1 << " values:" << endl;
        displayInput(objects[i]);
        cout << "---------------------" <<endl;
    }

    return 0;
}

