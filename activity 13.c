#include<stdio.h>
#include<math.h>
typedef struct vertex
{
float x,y;
}
Vertex;
typedef struct rectangle
{
float length,breadth,area;
Vertex a,b,c;
}
rect;
rect input_1()
{
rect r;
printf("enter coordinates for point 1");
scanf("%f%f",&r.a.x,&r.a.y);
printf("enter coordinates for point 2");
scanf("%f%f",&r.b.x,&r.b.y);
printf("enter coordinates for point 3");
scanf("%f%f",&r.c.x,&r.c.y);
return r;
}
void input_n(int n,rect r[n])
{
for(int i=0;i<n;i++)
{
r[i]=input_1();
}
}
void compute_1(rect *pr)
{
float l1,l2,l3;
l1=sqrt(pow(pr->b.x-pr->a.x,2)+pow(pr->b.y-pr->a.y,2));
l2=sqrt(pow(pr->c.x-pr->b.x,2)+pow(pr->c.y-pr->b.y,2));
l3=sqrt(pow(pr->c.x-pr->a.x,2)+pow(pr->c.y-pr->a.y,2));
if(l1>l2 &&l1>l3)
{
pr->length=l2;
pr->breadth=l3;
}
else if(l2>l1 && l2>l3)
{
pr->length=l1;
pr->breadth=l3;
}
else
{
pr->length=l1;
pr->length=l2;
}
pr->area=pr->length*pr->breadth;
}
void compute_n(int n,int rect r[n])
{
for(int i=0;i<n;i++)
{
compute_1(&r[i]);
}
}
void print_1(rect r)
{
printf("the area of the rectangle with vertices a(%.1f,%.1f),b(%.1f,%.1f) & c("%.1f,%.1f)is %.1f",r.a.x,r.a.y,r.b.x,r.b.y,r.c.x,r.c.y,r.area);
}
void print_n(int n,rect r[n])
{
for(int i=0;i<n;i++)
{
print_1(r[i]);
}
}
int main()
{
int n;
printf("enter the number of rectangles");
scanf("%d",&n);
rect r[n];
input_n(n,r);
compute_n(n,r);
print_n(n,r);
return 0;
}
