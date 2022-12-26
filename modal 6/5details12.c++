#include <iostream>
using namespace std;
class lecturer_details
{
public:
    void lecture_details()
    {
        cout << "enter name of lecturer";
        cin >> lname;
        cout << "Enter name of subject";
        cin >> sname;
        cout << "enter name of course ";
        cin >> cname;
        calcavg();

        lecture_details()
        {
            name_of_lecturer = "";
            subject = "";
            course = "";
            number = '0';
            void lecutre()
            {
                cout << "enter name of lecture";
                endl
                        cin >>
                    lname;
                cout <<, "enter name of subject";
                endl
                        cin >>
                    sname;
                cout << "enter name of course";
                endl
                        cin >>
                    cname;
                cout << "enter numberof lecture" endl
                            cin >>
                    lnumber;
            }
            void showdata()
            {
                cout << "name_of_lecture" << lname << "/name_of_subject" << sname << "/nname_of_course" << cname
                     << "/number_of_lecture" << lnumber;
            }
        };

        int main()
        {
            lecturer details obj[5];

            for (int i = 0; i < 5; i++)
                ;

            {

                obj[i].lecturer();
                obj[i].showdata();
            }
            return 0;
        }
