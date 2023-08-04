#include <iostream>

using namespace std;

class student

{
public:
    char name;

   void oki (char x)
    {
        name = x;
    }

char display()
    {
      return name;
    }

};

int main ()
{

student ob;
ob.oki('M');

cout<<ob.display();

}
