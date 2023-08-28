//. Write a class called Boxwhich contains three member variables; length width and height.
// This class also contains two constructors, one empty and another one is with parameter
// . You also have to write a function named getArea() that calculates and returns the area of a box object.
//Write necessary code inside the main function to test the class by creating an object.
#include <iostream>

using namespace std;

class Boxwhich
{
    public:
     double length;
      double  width;
      double  height;
      Boxwhich()
      {
         length = 0;
         width = 0;
         height =0;
      }    Boxwhich(double x,double y,double z)

      {
             length = x;
       width = y;
        height=z;
      }
      int getArea (Boxwhich ob)
      {
          return 2 * (ob.length * ob.width + ob.width * ob.height + ob.height * ob.length);//Box area*
      }
};

int main ()
{
    Boxwhich box(2.0,2.0,8.1);
    double result = box.getArea(box);//* box diya dite hbe zdi line 27 e class er obj dhori tbe na dhorai vhalo class er vitore return korle dorkar nei ob diye call dilei hbe
    cout << result;
}
