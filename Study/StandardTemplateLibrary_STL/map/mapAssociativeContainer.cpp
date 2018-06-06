#include<iostream>
using namespace std;

#include<map>

/*****************************************************
map<keydatatype,valuedatatype>m;
m[key]=value;
NOTE: Keys are always arranged in Ascending order in Map

All these api's return iterator
it = m.begin()
it = m.end()
it = m.find(key)

Api that use iterator as parameter
m.erase(key)
m.erase(it)
m.erase(m.begin());
m.erase(m.end());
m.erase(m.find(key));
m.erase(m.begin(),m.find(key));
m.erase(m.find(key),m.end());
m.insert(it);
******************************************************/

#if 0
how to change key,value,both?
How to erase 1st,last ,in b/w key-value pair
How to erase key-value pair with duplicate value,duplicate key?
Find particular key,erase it
How to swap values of values of 2 keys?
How to find whether particular key is present or not?
How to find whether particular value is present or not?
Can we sort the values? Keys are sorted by default
#endif

int main()
{
	map<string,int>m;
	m["Raja"] =5;
	m["Damu"] =7;
	m["Suri"] =9;
	m["Ammi"] =11;
	m["Raja"] =145; //The previous value that is paired with "Raja" is replaced with this value 

	m.insert(pair<string,int>("Raja",100)); //We cannot insert existing key using this API
	m.insert(make_pair("Raja",500)); //We cannot insert existing key using this API
        cout<<"Size of map is: "<<m.size()<<endl;

#if 0 //3types of insert()
	m.insert(pair<string,int>("Zadran",900) ); //insert key-value pair using 1 parameter
	m.insert(make_pair("Rashid",345));

	it=m.begin();                              //insert key-value pair at specified position using 2parameters
	m.insert(it,pair<string,int>"Mark",650))

	map<string,int>m1;
	m1.insert(m.begin(),m.find("Raja"));
#endif

#if 0  //3types of erase()
	m.erase("Damu");                               //Erase key-value pair using key

	map<string,int>::iterator it = m.find("Suri"); //Erase key-value pair using iterator
	m.erase(it);

	it = m.find("Ammi");
	m.erase(it,m.end());                           //Erase key-value pair using range

	map<string,int>m1;
	m1.erase(m.begin(),m.find("Raja"));
	m1.erase(m.find("Raja"),m.begin());

#endif

//1st Method for Traversing
	for(map<string,int>::iterator it=m.begin();it !=m.end();it++) //To display all the key-value pairs
	{
		cout<<it->first<<"=>"<<it->second<<endl;
	}

	cout<<"We can use find(),begin(),end() API's instead of iterator as shown below"<<endl;
	cout<<m.find("Raja")->first<<"=>"<<m.find("Raja")->second<<endl;
	cout<<m.begin()->first<<"=>"<<m.begin()->second<<endl;

//2nd Method for Traversing
	while(!m.empty())
	{
		cout<<m.begin()->first<<"=>"<<m.begin()->second<<endl;
		m.erase(m.begin()); //V.V.Imp, only when erase, it will be empty at one stage
	}

	if( m.find("Ammi") != m.end() )
	{
		cout<<"Raja is present in Map\n";
	}
	else
	{
		cout<<"Specified Key is not present\n";
	}
}



