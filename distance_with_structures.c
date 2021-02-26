//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct point
{
float x;
float y;
}p;
void input(struct point*p)
{
printf("enter the coordinates:\n");
scanf("%f%f,&(*p).x,&(*p).y);
}
float distance(struct point p1,struct point p2)
{
float dist;
dist=sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
return dist;
}
void output(point p1,point p2,float distance)
{
printf("the distance between two points  =%f",dist);
}
void main()
{
struct point p1,p2;
float s;
printf("first point is:\n");
input(&p1);
printf("second point is:\n);
input(&p2);
s=distance(p1,p2);
output(d);
}
