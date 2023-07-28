#include <iostream>

using namespace std;

class student
{

public :

    const int admission_fee;

    const int exam_roll;


    student (int x, int y)

        :admission_fee (x),exam_roll (y)
    {

        cout <<admission_fee<<endl<<exam_roll;
    }




};

int main ()
{

    student ob(1500,45);
    return 0;
}
