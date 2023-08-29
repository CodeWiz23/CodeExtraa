//Write a program that will add two private data
// members from two different classes using a
// friend function. The function will return the
//  total addition number. Each class has a constructor
//which will set the value of an object. Display the total sum in the main function.


#include <iostream>

using namespace std;
class teacher;
class student
{
private :
    int i;
public://*
    int friend display(student x, teacher y);

    student (int a)
    {
        i = a;
    }

};

class teacher
{
private:
    int y;
public://*
    int friend display (student x, teacher y);

    teacher (int b)
    {
        y = b;
    }
};

int  display (student x, teacher z)
{
    return( x.i+z.y);
}

int main ()
{
    student ob(4);
    teacher ob2(6);
    int result= display(ob,ob2);
    cout<<result;

}

