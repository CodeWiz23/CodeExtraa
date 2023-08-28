//Write a class name building which has three data members: height, number
// of floors and price. You have to find which building is taller,
// has the highest number of floors and is more expensive. You have
//  to solve the problem using the polymorphism concept. Implement the class.
#include <iostream>

using namespace std;

class building
{
public :
    int height;
    int floors;
    int price;

    void f(int a, int b, int c)
    {
        height = a;
        floors = b;
        price = c;
    }
    void f(double s, double p, double r)
    {
        height = s;
        floors = p;
        price = r;
    }


    void  comp(building s,building y)
    {
        if(s.height>y.height)

            cout<<"Building 1 is taller"<<endl;
        else
        {
            cout <<"Building 2 is taller." << endl;
        }

        if(s.floors>y.floors)

            cout<<"Building 1 has the highest floors"<<endl;
        else
        {
            cout << "Building 2 has the highest floors." << endl;
        }
        if(s.price>y.price)

            cout<<"Building 1 has the highest price. "<<endl;
        else
        {
            cout << "Building 2 has the highest price." << endl;
        }
    }
};

int main ()
{
    int x1,x2,y1,y2,z1,z2;
    cout<<"Enter Building 1 & 2 Heights : ";
    cin>>x1>>x2;
    cout<<"Enter Building 1 & 2 floors : ";
    cin>>y1>>y2;
    cout<<"Enter Building 1 & 2 price : ";
    cin>>z1>>z2;

    building ob,ob1;//-
    ob.f(x1,y1,z1);
    ob1.f(x2,y2,z2);
    ob.comp(ob,ob1);
}
