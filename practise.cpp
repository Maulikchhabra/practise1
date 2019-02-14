//comments added//
#include<iostream>
using namespace std;
class sample //class //
{
	int a,b;
	public:
		sample(int a , int b)//parametrized constructor//
		{
			(*this).a=a;//this pointer// 
			(*this).b=b;
		}
		sample(sample &old)//copy constructor syntax//
		{
			a=old.a;//copying values of old object//
			b=old.b;
		}
		void print()//print function declaration//
		{
		  cout<<"a ="<<a<<endl;
		  cout<<"b ="<<b<<endl;	
		}
};
int main()
{
	sample s1(10,20);//putting a=10 and b=20//
	sample &s2(s1);//putting the value of s1 object in s2//
	s1.print();//printing s1,function calling//
	s2.print();//printing s2,function calling//
return 0;	
}
