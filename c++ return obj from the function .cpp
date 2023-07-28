#include <iostream>
using namespace std;

class addition
{
public:
    int a;
    int b;
  int sum_value;

    addition(int x, int y)
    {
        a = x;
        b = y;
    }


    int add()
    {
        int sum_value = a + b;
        return sum_value;
    }


};

int main()
{


    addition ob(5, 10);


    ob.add();


    cout << "Sum stored in the object: " << ob.add() << endl;

    return 0;
}

