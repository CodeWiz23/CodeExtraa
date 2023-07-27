#include <iostream>

using namespace std;

class student
{
public :

    int roll ;
    float cgpa;

    void display ( )

    {
        cout << "The roll is :" << roll <<endl<< "The CGPA is :" <<cgpa<<endl;
    }
    student (int x,float y)
    {
        roll =x;
        cgpa =y;
    }

   student ()
   {
       cout << "Constructor overloading  " <<endl;
   }

};

int main ()
{
    student ob;
    student robin(4,3.99);
    robin.display();

    return 0;

}
