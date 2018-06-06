#include<iostream>
using namespace std;
#include<unordered_set>

int main()
{
	unordered_set<char>us{'a','a','a','b'};
	unordered_set<char>::iterator it;
        int count=0;
	//while(ch<='a' && ch >= 'z')
	//{
               count= us.count('a');
     /* 
		it = us.find('a');
		if(it != us.end())
		{
			count++;
		}
*/
               cout<<"a"<<count<<endl;
	//}
               count= us.count('b');
/*
                it = us.find('b');
		if(it != us.end())
		{
			count++;
		}
*/
               cout<<"b"<<count<<endl;

}
