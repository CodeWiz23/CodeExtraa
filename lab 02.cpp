//Name : A.R.M Mursalin kabir
//Roll: 22235103079

#include <iostream>
using namespace std;
class Intake51
{
private:
    string studentName;
    double cgpa;

public:

    Intake51(const string& name, double cgpa) : studentName(name), cgpa(cgpa) {}


    void displayInfo() const
    {
        cout << "Student Name: " << studentName << endl;
        cout << "CGPA: " << cgpa << endl;
    }


    friend Intake51 compareHighestCGPA(const Intake51& student1, const Intake51& student2);
};


Intake51 compareHighestCGPA(const Intake51& student1, const Intake51& student2)
{
    if (student1.cgpa > student2.cgpa)
    {
        return student1;
    }
    else
    {
        return student2;
    }
}

int main()
{

    Intake51 student1(" Mursalin", 3.9);
    Intake51 student2("Kabir", 3.8);


    Intake51 highestCGPAStudent = compareHighestCGPA(student1, student2);

    cout << "Student with the highest CGPA:" << endl;
    highestCGPAStudent.displayInfo();

    return 0;
}

