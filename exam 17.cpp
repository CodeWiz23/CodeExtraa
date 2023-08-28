//1.Create a class to print the sum of numbers.
//2.The class has two methods with the same name but different types and number of parameters.
//3.One method for printing sum has two parameters of integer and long type while the other method for printing sum has three parameters of type int.
//4.Now call the method with two integer parameters and check which method gets called.
#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

class student
{
public :

    void display(int a, long b)
    {
        cout << a+b<<endl<<"Number 1  Method has been called"<<endl;
        cout << "_______________________";
    }

    void display(int  c,int d, int e)
    {
        cout  <<c+d+e<<endl<<"Number 2 Method has been called";
    }

};
int main ()
{
    student ob;
    ob.display(5,8);
    return 0;
}
