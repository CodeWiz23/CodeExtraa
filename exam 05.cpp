//Create a class name tree which has two fields, width and height. Create a constructor
// and destructor. Make a set function to take input from the user.
//Make a display function to show value. Create an object which has a parameter.
#include <iostream>

using namespace std;

class tree
{

public:

    float height,width;

    tree (float  a, float b)
    {
        width = a;
        height = b;
        cout<<"Tree set width is :"<<width<<endl<<"Tree set height is :"<<height<<endl;;
    }


    ~tree()
    {
        cout<<"Destructor is called";
    }


    void setvalue()
    {
        float a,b;
        cout << "Enter tree Width and Height :";
        cin >>a>>b;
        width = a;
        height =b;

    }
    void displayvalue()
    {
        cout <<"Tree width is :"<<width<<endl<<"Tree height is "<<height<<endl;
    }

};
int main ()
{


tree ob1(89.99,88.09);

ob1.setvalue();
ob1.displayvalue();

}
