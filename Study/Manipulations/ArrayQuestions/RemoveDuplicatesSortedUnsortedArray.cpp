#include<iostream>
using namespace std;

#if 0
/*****************************************
Delete the Elements in Sorted Array
=>Skip the repeated elements 
=>Copy the remaining elements to New Array
*****************************************/
int main()
{
	int a[10]={2,2,2,4,4,7,9,9,10,11};
        int temp[6],j=0,i=0;
	for(;i<9;i++) //Since we compare 2elements take N-1
	{
		if( a[i] == a[i+1] ) //skip repeated elements
			continue;
		else
                 {
			temp[j]=a[i];
                        j++;
                 }
	} // By the end of this loop both i & j are incremented 
	temp[j]=a[i];//V.V. imp step,copy the array last index to temp

	for(int i=0;i< ( sizeof(temp)/sizeof(temp[0]) ); i++)
	{
		cout<<temp[i]<<",";
	} 
}
#endif

/*****************************************
Delete the Elements in UnSorted Array
=>Skip the repeated elements 
=>Copy the remaining elements to New Array
*****************************************/
int main()
{
	int a[10]={2,4,7,6,7,8,2,4,1,6};
        int temp[6],j=0,i=0,k=0;
	for(i=0;i<9;i++) //Since we compare 2elements take N-1
	{
		for(j=i+1;j<9;j++)
		{       
			if( a[j] == a[i] ) //skip repeated elements
				continue;
			else
			{
				temp[k]=a[j];
				k++;
			}
		}
	} // By the end of this loop both i & j are incremented 
	//temp[k]=a[i];//V.V. imp step,copy the array last index to temp

	for(int k=0;k< ( sizeof(temp)/sizeof(temp[0]) ); k++)
	{
		cout<<temp[k]<<",";
	} 
}
















