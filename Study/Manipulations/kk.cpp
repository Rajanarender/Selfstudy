#include<iostream>
using namespace std;

void func(char *s)
{
	int count=1;
	while(*s)
	{
		if(*s==' ')
		{
			count++;
			if(*(s+count)==' ')
				cout<<'*';
			else
				cout<<*(s+count);
		}
		s++;
	}
}
int main()
{
	char x[]="Global Edge is a MNC";
	func(x);
}


