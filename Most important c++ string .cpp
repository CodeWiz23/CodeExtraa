//#include <iostream>
//
//using namespace std;
//
//class student
//
//{
//public:
//    char ch ;
//
//
//    void jo (char x)
//    {
//
//        ch = x;
//    }
//
//
//    char display()
//    {
//        return ch;
//    }
//
//};
//
//
//int main ()
//{
//    char word;
//
//    student ob;
//    cout << "Enter a character : ";
//    cin >>  word;
//    ob.jo(word);
//
//
//    ob.display();
//
//
//    cout<< "Your character is : " <<ob.display();
//
//    return 0;
//
//}
//If access direct to the object of a class !


#include <iostream>

using namespace std;

class student

{
public:
    char ch ;


    char display()
    {
        return ch;
    }

};

int main ()
{
    student ob;
    ob.ch;
    cout << "Enter a character  : ";
    cin >> ob.ch;

    cout<< "Your character is : " <<ob.display();

    return 0;
}

