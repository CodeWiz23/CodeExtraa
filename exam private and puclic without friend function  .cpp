#include <iostream>

class Student
{
private:
    int value;

public:
    int x;

    Student(int v, int a)
    {
        value =v;
        x =a;
    }
    double  getvalue()
    {

        return value;
    }

};

int display(Student ob)
{
    std::cout << "Private value: " << ob.getvalue()<<std::endl<<"Public value :"<<ob.x ;
}
int main()
{
    Student ob(42,40);
    display(ob);
    return 0;
}

