#include <iostream>
using namespace std;
class lectuer_details
{
public:
    string name_of_lecture;
    string name_of_subject;
    string name_of_course;
    int number_of_lectutre;

    lectuer_details()
    {
        name_of_lecture = "";
        name_of_subject = "";
        name_of_course = "";
        number_of_lectutre = 0;
    }
    void lecture()
    {
        cout << "enter name of lecture : ";
        cin >> name_of_lecture;
        cout << "enter name of subject : ";
        cin >> name_of_subject;
        cout << "enter name of course : ";
        cin >> name_of_course;
        cout << "enter number of lecture : ";
        cin >> number_of_lectutre;
    }
    void showdata()

    {
        cout << "----------------------------------\n";
        cout << "name_of_lecture : " << name_of_lecture << "\nname_of_subject : " << name_of_subject << "\nname_of_course : " << name_of_course << "\nnumber_of_lecture : \n"
             << number_of_lectutre << endl;
    }
};
int main()
{
    lectuer_details obj[2];

    for (int i = 0; i < 2; i++)
    {

        obj[i].lecture();
        cout << "/n";
        obj[i].showdata();
    }
    return 0;
}