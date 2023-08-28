//Write a class named Student. A Student has name, id and CGPA.
//    Create two objects of the above mentioned class.
//    Show the average CGPA of all of them.

#include <iostream>

    using namespace std;

class student
{
public:
    string name;
    int id;
    float CGPA;

    student(string a, int b, float c)
    {


    name = a;
    id = b;
    CGPA = c;
    }

};
int main ()
{
    student obj1("Mursalin",79,4.00);
    student obj2("Kabir",9,4.00);

  float result = (obj1.CGPA+obj2.CGPA)/2;
  cout << result;
}

