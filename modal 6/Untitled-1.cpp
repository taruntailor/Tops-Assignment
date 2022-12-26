#include<iostream>
using namespace std;
class lecture_dtails
{
    public:
    char name_of_lecture[100];
    char name_of_subject[100];
    char name_of_course[100];
    int number_of_lecture;
 lecture_details()
   {
    name_of_lecturer="";
    subject="";
    course="";
	number='0';
	void lecutre()
   }
  void lecture()
   {    cout<<"enter name of lecture";endl
		cin>>lname;
		cout<<,"enter name of subject";endl
		cin>>sname;
		cout<<"enter name of course";endl
		cin>>cname;
		cout<<"enter numberof lecture"endl
		cin>>lnumber;
    }
    void showdata()
       {
        	cout<<"name_of_lecture"<<lname<<"/name_of_subject"<<sname<<"/nname_of_course"<<cname
			<<"/number_of_lecture"<<lnumber;
        }  
};
int main()
{
    lecture_details obj[5];
    for(int i+0; i<5; i++;)
    {
        obj[i].lecture;
        obj[i].showdata;
    }
    return 0;
}