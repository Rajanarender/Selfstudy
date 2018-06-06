#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

int func(const char *m,const char *n)
{
	char *k= (char*)malloc(sizeof(char)*strlen(m)+1);
	//char *k =new char[strlen(m)+1];
	cout<<sizeof(k)<<endl;

	while(*m && *n && *m==*n)
	{
		return func(m+1,n+1); //Here only address is changed,so it will not affect 
	}
	if(*m=='\0' && *n =='\0')
	{
		return 0;
	}
	else 
		return *m-*n;
}

int main()
{
	char x[]="Raja";
	char y[]="RajA";
#if 0
	const char *x="Raja"; //R-value is const,ptr pointing to const value
	const char *y="RajA";
#endif
	cout<<func(x,y)<<endl;
}
