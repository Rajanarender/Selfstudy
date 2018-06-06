#include<iostream>
using namespace std;
#include<vector>

class Test
{
	string str;
	int var;

	public:
	Test(string s,int num)
	{
		str=s;
		var=num;
	}
	void display() 
	{
		cout<<"Name: "<<str<<" variable: "<<var<<endl;
	}
};

int main()
{
#if 0
	vector<Test*>v; //class ptr object
	Test *obj;
	v.push_back(obj);//pass by address only
        if(v.find(obj) != v.end()) //if obj is present in vector
         v.erase(v.find(obj));
#endif
#if 0
        vector<Test>v;//Normal class object
        Test obj;
	v.push_back(obj);//pass by address only
#endif

	vector<Test>v; //Only back insertion
	v.push_back( Test("Raja",1) ); //Explicit constructor call
	v.push_back( Test("Suri",2) ); //Explicit constructor call
        //v[0]= Test("Damu",3); //Throws Segmentation fault

        deque<Test>q; //Only front insertion
  	q.push_front( Test("Raja",1) ); //Explicit constructor call
	q.push_front( Test("Suri",2) ); //Explicit constructor call

        forward_list<Test>f; //both front insertion
  	f.push_front( Test("Raja",1) ); //Explicit constructor call
	f.push_front( Test("Suri",2) ); //Explicit constructor call

        list<Test>l; //both back and front insertion
	v.push_back( Test("Raja",1) ); //Explicit constructor call
	v.push_back( Test("Suri",2) ); //Explicit constructor call
  	l.push_front( Test("Rajan",3) ); //Explicit constructor call
	l.push_front( Test("Surin",4) ); //Explicit constructor call

        set<Test>s;
        s.insert( Test("Raja",1) );
        s.insert( Test("Suri",2) );
        s.insert( Test("Rajan",3) );
        s.insert( Test("Surin",4) );
      
        map<int,Test>m; //class as Value
        m[0]=Test("Raja",10);
        m[1]=Test("Suri",20);
        m[2]=Test("Raja",30); //Previous same key will be overridden with this key-valu pair
        m.insert( make_pair(3,Test("Raja",40)) ); //same key cannot be inserted
        m.insert( pair<int,Test>(4,Test("Ammi",50)) )
        for(map<int,test>::iterator it=m.begin();it != m.end(); it++)
           {
             cout<<"Key is:"<<it->first<<"=>"<<"value is:"<<it->second.display(); //display() functions displays class members
           }
 
        map<Test,int>m; //class as Key
        m[Test("Raja",10)] =0;
        m[Test("Suri",20)] =1;
        m[Test("Raja",30)] =2; //Previous same key will be overridden with this key-valu pair
        m.insert( make_pair(Test(40,"Raja"),3) ); //same key cannot be inserted
        m.insert( pair<int,Test>(Test(50,"Ammi"),4) )
        for(map<int,test>::iterator it=m.begin();it != m.end(); it++)
           {
             cout<<"Key is:"<<it->first.display()<<"=>"<<"value is:"<<it->second; //display() functions displays class members
           }

         Since all the keys are arranged in sorted order*,when passing classname as key,we need to sort it using operator overloading
           Test& operator<(const Test&obj)
             {
               if(name != obj.name)
               return name<obj.name;
               else if(name == obj.name)
               return num<obj.num;
             }

#if 0 
//1st Method
	for(int i =0;i<v.size();i++)
	{
		v[i].display();
	}
#endif
#if 1  
//2nd Method
        for(vector<Test>::iterator it = v.begin();it !=v.end();it++)
        {
                it->display();
       }
#endif
}




