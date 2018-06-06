#include<stdio.h>
#include<stdlib.h>
int main()
{
 
        int mat[2][2]={{1,2},{3,5}};//2D 
        int rows=2,columns=2; //We can use macros instead

#if 0 //The '*' keeps vanishing 
        int *x = (int*)malloc(sizeof(int)); //1Dimensional 
#endif
	int**x = (int**)malloc(sizeof(int*) * rows); //2Dimensinal,Allocating memory for Rows
	for(int i=0;i<rows;i++) //Allocating memory for each row with all columns
	{
		x[i] = (int*)malloc(sizeof(int)*columns);
	}

#if 0 //C++
        int *x = new int[];//1Dimensional 
	int**x = new int* [rows]; //2Dimensinal,Allocating memory for Rows //V.V.Imp step
	for(int i=0;i<rows;i++) //Allocating memory for each row with all columns
	{
                x[i]= new int[columns];
	}
#endif
       //strcpy //TBD
}
