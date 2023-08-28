//. Create a new class called BAT and set the height of its private data member to be a float.
// To alter an object's height, call its set height () member method. width () is a non-member
//  function that accepts a square object as an input and returns that same object's area as
//its output.
//Now we'll make a new object of the BAT class, provide its height, and output its width.

#include <iostream>

using namespace std;

class BAT
{
private :
    float height;
    public:
  void set_height(float h)
  {
      height = h;
  }
  friend float width (BAT ob);
};
float width (BAT ob)
{
    return ob.height*ob.height;
}
int main ()
{
    BAT obj;
    obj.set_height(10.0);
    float result = width(obj);
    cout << result;
}
