

#include <iostream>
using namespace std;
class A
{
public:
int a, b;
A()
{
	cout<<"enter value of a :";
		cin>>a;
		cout<<"enter vlue of b:";
		cin>>b;
	}
			friend class B;
};
	class B
	{
		public:
			void display (A &obj)
			{
				cout<< endl;
		cout<<"after swap.." << obj.b <<endl;
		cout<<"a: " <<obj.b << endl;
		cout<<"b : " <<obj.a;
			}
	};
	int main()
	{
		A obj;
		B obj2;
		obj2.display(obj);
		return 0;
	
	
}