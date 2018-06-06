#include<iostream>
using namespace std;
/*****************************************************
Object slicing:
Direct Converting derived class object to base class object leads to this issue

Problem:
Base b = d; //Direct assignation 
b.display(); //This calls base class function only

Solution 1: Use reference
Base &b = d;
b.display(); //This calls Derived class function

Solution 2: Use dynamic_cast
Base *b = dynamic_cast<Base*>(&d);
b.display(); //This calls Derived class function

NOTE: Inheritance + atleast one virtual function should be there, to get Object slicing Problem
*****************************************************/

class Base
{
	public:
		virtual void display()
		{
			cout<<"In Base\n";
		}
};

class Derived:public Base
{
	public:
		void display()
		{
			cout<<"In Derived\n";
		}
};

/*
void func(Base &b)
{
	b.display();
}
*/

int main()
{
	Derived d;
	Base b = d; //This leads to Object Slicing, derived fuction is not called 

#if 1 //Using base reference
	Base &b = d; //This avoid object slicing
	b.display();
#endif

#if 2 //Using dynamic_cast
	Base *b =dynamic_cast<Base*>(&d);
	b->display();
#endif
	//func(d);

}
