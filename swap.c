// Swap the value of 2 number
#include<stdio.h>
void main()
{
int a=10 ,b=20;
b=a+b ;
a=b-a ;
b=b-a ;
printf("after swaping\n value of a=%d\n value of b=%d",a,b);
}