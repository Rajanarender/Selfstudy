#if 0
volatile:
This keyword tells the compiler not to optimize the code since they get affected by the outside code/external Hardware 
Generally the variables are accessed from cache
when we use volatile,the variables are accessed from their address directly
Global variables used in ISR[Interrupt Service Routines] get affected, so we should use volatile to avoid it
Global variables used in Multithreaded applications get affected, so we should use volatile to avoid it
#endif

#include<iostream>
using namespace std;

int main()
{
	volatile int x= true;
        while(1)
        {
	if(x)
		cout<<"Global\n";
	else
		cout<<"Edge\n";
        }
}
