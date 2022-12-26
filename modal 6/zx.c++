#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    cout << "Enter information of students: " << endl;

    // storing information
    for(int i = 0; i < 10; ++i)
    {
        s[i].roll = i+1;
        cout << "lucture name " << s[i].roll << "name ," << endl;

        cout << "subject name : ";
        cin >> s[i].name;

        cout << "corse: ";
        cin >>'corse';
        
        cout << "number od lucture: ";
        cin >> s[i].lucture;

        cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int i = 0; i < 10; ++i)
    {
        cout << "\nlucture name: " << lucture name << endl;
        cout << "subject name : " << s[i].subject name  << endl;
        cout << "corse: " << s[i].corse << endl;
        cout << "lucturn: " << s[i].lucture << endl;
    }

    return 0;
}