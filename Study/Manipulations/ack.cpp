#include<iostream>
using namespace std;

int main()
{
	//char x[]="Global Edge is located in Global Tech Park";
	const char *x="Global Edge is located in Global Tech Park";
	const char *m = x;
	int count = 1;
	while(*m)
	{
#if 0
		if(count==1)
		{
			cout<<*m<<endl;
		}
#endif
		if(*m == ' ')
		{
			count++;
			m=m+count;
			if(*m != ' ')
				cout<<*m<<endl;
                     
#if 0
			else
			{
				*m = '*';
				cout<<*m<<endl;
			}
#endif 
		}
		m++;
	}
}
