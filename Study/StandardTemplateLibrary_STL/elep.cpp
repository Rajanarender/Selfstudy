#include<iostream>
using namespace std;
#include<map>


int main()
{
	map<char,int>m;
	m['A']=2;
	m['B']=2;
	m['C'] =3;
	map<char,int>::iterator it;
	for(it = m.begin();it != m.end();it++)
	{
		if( it->second == (it++)->second )
		{
			cout<<"Key having duplicate value is:"<<it->first<<endl;
                        break;
		}
	}

}
