//1. Create a class to print the sum of two numbers.
//2. The class has two methods with the same name but different types of parameters.
//3. One method for printing sum has two parameters of integer type.
//4. while the other method for printing sum has two parameters of type long.

#include <iostream>

using namespace std;

class student
{
public :

    void display(int a, int b)
    {
        cout << a+b<<endl;
    }
    void display(long c,long d)
    {
        cout << c+d;
    }
};
int main ()
{
    student ob;
    ob.display(4,7);
    ob.display(7,8);

    return 0;
}
