#include<iostream>
using namespace std;


char* func(char *x)
{
		static char str[10];
		static int i;
	if(*x)
	{
		func(x+1);
		str[i++] = *x;
	}
str[i] = '\0';

return str;
}




int main()
{
	char src[]="Edge";
	char des[11] ="Global";//Should we specify the destination size b4 concating the source
	//func(des,src);//Pass by Reference,So no need to have Return type
const char *pp = func(des);
	cout<<pp<<endl;
}
