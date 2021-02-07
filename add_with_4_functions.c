//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input()
{
int a;
printf("enter a number :");
scanf("%d",&a);
return a;
}
int sumof(int a,int b)
{
int sum;
sum=a+b;
return sum;
}
void output(int a,int b,int c)
{
printf("sum of %d + %d is %d\n",a,b,c);
}
int main()
{
int x1,x2,z;
x1=input();
x2=input();
z=sumof(x1,x2);
output(x1,x2,z);
return 0;
}
