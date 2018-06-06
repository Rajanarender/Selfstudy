#include<iostream>
using namespace std;

int main()
{
	char x[]="AAAABBCCCD";
	int count =0;
	char i;
	int j;
	while (i >='A' && i<='Z')
	{
		for(j=0;x[j] !='\0';j++)
		{
			if(x[j]==i)
			{
				count++;
			}
		}
		if(count>=1)
			cout<<x[j]<<count;   
	}
}
