//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
float volume,h,d,b;
printf("enter value of h:");
scanf("%f",&h);
printf("enter value of d:");
scanf("%f",&d);
printf("enter value of b:");
scanf("%f",&b);
volume= 1/3((h*d*b)+(d/b));
printf("volume of tromboloid is:%f",volume);
return 0;
}
