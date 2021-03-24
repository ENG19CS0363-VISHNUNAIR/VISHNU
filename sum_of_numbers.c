//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input()
{
int n;
printf("enter the value of n:");
scanf("%d",&n);
return n;
}
void enterelement(int n,int a[n])
{
for(int i=0;i<n;i++)
{ 
printf("enter the element %d of array:",i+1);
scanf("%d",&a[i]);
}
}
int add(int n,int a[n])
{
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
return sum;
}
void output(int sum)
{
printf("the sum is %d", sum);
}
int main()
{
 int n,sum;
 n=input();
 int a[n];
enterelement(n,a);
sum=add(n,a);
output(sum);
}
