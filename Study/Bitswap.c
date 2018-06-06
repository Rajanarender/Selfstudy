#include<stdio.h>
int main()
{
int num=1212;
int x,y;
x= (num&0x3333)<<2;
y=(num&0xcccc)>>2;
printf("%d\n",x|y);


}

