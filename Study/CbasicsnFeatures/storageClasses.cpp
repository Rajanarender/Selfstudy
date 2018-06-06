
Keywords:[SERAM],DSSL  
auto
static
extern
register
mutable[C++]

*******************************************************************
auto:
Default: Garbage value
scope: local scope within the block
storage: stack memory
Life: This variable is alive till the block ends
auto int x; 
 (or)
int x; //By default any variable declared is auto

*******************************************************************
static:[Updated value]
Default: Zero
scope: global scope and local scope based on static variable declaration 
storage:Globally initialized variables,Data segment
Life: This variable is alive till the program completes its execution
NOTE: static takes the latest updated value

Case 1:
static int x; 
cout<<x;// Zero

Case 2:
void func()
{
	for(int i=0;i<3;i++)
	{
		static int x=10;
		x++;
	}
	cout<<x;
}

Case 3:
int func()
{
	static int x=10;
	x++;
	return x;
}

int main()
{
	cout<<func(); //11
	cout<<func(): //12
	cout<<x; //ERROR,Unintialized varible x
}

*******************************************************************
extern: Extending the scope of local variable to global and accessing within multiple files
default value: 0
scope: Global scope within multiple files,Alive till the completion of the program
storage: Globally unitialized segment,BSS in DATA segment
Life: This variable is alive till the program completes its execution
syntax:
extern int x =0;//WARNING
extern int x;//Only Declaration is allowed

NOTE: if int x is not defined in any other file,Linking error occurs 

*******************************************************************
register:[Faster Access in Run time]
Default: Garbage value
scope: local scope within the block
storage: Stored in CPU registers,Faster Access in run time
Life: This variable is alive till the block ends
syntax:
register int x; 

*******************************************************************
mutable:


void func() const
{
	mutable int x;
	x++;
	cout<<x;
}

int main()
{
	func();
}


*******************************************************************
Memory Layout:
Command line arguments ,argv[0],argv[1],....
stack -main(),local variables[auto],functions,blocks
Heap -memory allocations,ptr
Globally uninitialized Data[static,extern,normal global variables]-BSS[Block Started by Symbol]
Globally initialized Data[static,extern,normal global variables]
Code segment/text segment -Read only memory[const]
*******************************************************************
Compilation Steps:[PCAL]
Preprocessing -expanding all Macros,including all headers,disabling the comment lines
Compiling- .i[intermediate code] to .s[Assembly code]
Assembling- .s to .o[Object code]
Linking- .o to .exe
*******************************************************************
Static linking Libraries[.a]
ar rcs x.o y.o libxx.a 

Dynamic linked libraries/Shared libraries[.so]
gcc -shared -o x.o y.o libxx.so

*******************************************************************







