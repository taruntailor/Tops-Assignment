#include<iostream>
using namespace std;
class simple
{
    int p,n;
    float r,si;
public:
    void getvalues()
    {
        cout<<"Enter Principal amount\n";
        cin>>p;
        cout<<"Enter Number of Years\n";
        cin>>n;
        cout<<"Enter Rate of Interest\n";
        cin>>r;
    }
    void display()
    {
        si=(p*n*r)/100;
        cout<<"Simple Interest = "<<si<<endl;
    }
};
int main()
{
    simple s;
    s.getvalues();
    s.display();
    return 0;
}

