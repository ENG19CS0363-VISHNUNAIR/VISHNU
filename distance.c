//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input()
{
float a;
scanf("%f",&a);
return a;
}
float distance(float x1,float x2,float y1,float y2)
{
float dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
return dist;
}
void output(float dist)
{
printf("the distance between two points is :%f",dist);
}
int main()
{
float x1,x2,y1,y2;
printf("enter x1:");
x1=input();
printf("enter x2:");
x2=input();
printf("enter y1:");
y1=input();
printf("enter y2:");
y2=input();
int d=distance(x1,x2,y1,y2);
output(d);
return 0;
}
