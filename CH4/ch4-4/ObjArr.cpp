#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char * name;
    int age;

public:
    Person (char * myname, int myage)
    {
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }

    Person()
    {
        name = NULL;
        age = 0;
        cout << "called Person()" << endl;
    }

    void SetPersonInfo(char * myname, int myage)
    {
        name = myname;
        age = myage;
    }

    void ShowPersonInfo()
    {
        cout << "Name : " << name << " , Age : " << age << endl;
    }

    ~Person()
    {
        delete []name;
        cout << "Called destructor!" << endl;
    }

};

int main(void)
{
    Person parr[3];
    char namestr[100];
    char * strptr;
    
    int age;
    int len;

    for (int i=0; i<3; i++)
    {
        cout << "Name : ";
        cin >> namestr;
        cout << "Age : ";
        cin >> age;

        len = strlen(namestr) +1;
        strptr = new char[len];
        strcpy(strptr, namestr);
        parr[i].SetPersonInfo(strptr, age);
    }
    for (int i = 0; i<3; i++)
    {
        parr[i].ShowPersonInfo();
    }
    
    return 0;

}