#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string name1  = " Mursalin " ;

    string name2  = " Kabir "  ;

    string name3 ;


    name3 = name1;

      cout << "Name1 value is  :" <<name1<<endl;

      cout << "Name1 value is  :" <<name2<<endl;


    cout << "Name1 value is puting on Name3  :" <<name3<<endl;

    name3 = name1 +  name2 ;


cout << "The full name is :"<<name3<<endl;


         int len = name1.size ();

    cout << "The size of name1 : "<<len<<endl;

    int len2 = name2.size ();

    cout << "The size of name2 : "<<len2<<endl;

    int len3 = name3.size ();

    cout <<"The size of name3 : "<<len3<<endl;

return 0;

}
