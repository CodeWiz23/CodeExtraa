

#include <iostream>
using namespace std;

class intake51
{
private:
    int id;
    string sec;

public:
    void setInfo(int id, string sec)
    {
        this->id = id;
        this->sec = sec;
    }

    void showInfo()
    {
        cout << "ID: " << id << endl;
        cout << "Section: " << sec << endl;
    }
};

int main()
{
    intake51 obj1;
    obj1.setInfo(1, "A");


    intake51 obj2 = obj1;

    cout << "Object 1:" << endl;
    obj1.showInfo();

    cout << "\nObject 2:" << endl;
    obj2.showInfo();

    return 0;
}
