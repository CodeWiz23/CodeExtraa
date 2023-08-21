#include <iostream>

using namespace std;

class student
{
private :
    double height;

    double  width;
public :
    student ( double  a,  double  b)
    {
        height = a;
        width = b;
    }
    friend  double  cal (student s);
};
double cal (student s)
{
    return s.height*s.width;
}

int main ()
{
    student ob[3]=
    {
        student (3.55,5.66),//student
        student(7.66,9.66),
        student(4.22,3.99)

    };
    int i;
    for (i=0; i<3; i++)
    {
        double  result = cal(ob[i]);//ob pass
        cout<<result<<endl;

    }
     return 0;//late e dite hbe
}
