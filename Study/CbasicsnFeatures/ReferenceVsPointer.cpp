#include<iostream>
using namespace std;

int main()
{
int i = 10,i1=20;
int &x= i;
cout<<&x<<" "<<&i<<endl; //ptr memory address and variable memory address are different
//int &y = NULL; //Error,R-value cannot be NULL for reference
x = i1;
(&x)++;
//int *ptr = NULL;

int *ptr= &i;
cout<<&ptr<<" "<<&i<<endl; //ptr memory address and variable memory address are different
int *p1=NULL;//NULL ptr
ptr= &i1;
}
