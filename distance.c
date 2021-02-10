//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float P1(float x1, float x2)
{
return x2 - x1;
}
float P2(float y1, float y2)
{
return y2 - y1;
}
float distance(float x1,float x2, float y1, float y2)
{
return sqrt(P1(x1,x2) * P1(x1, x2) + P2(y1, y2) * P2(y1, y2));
}
int main()
{
float x1, x2, y1, y2, dis;
printf("enter coordinate of first point (x1,y1) :\n");
scanf("%f%f",&x1, &y1);
printf("enter coordinate of second point(x2, y2):\n");
scanf("%f%f", &x2, &y2);
dis = distance(x1,x2,y1,y2);
printf("distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f",x1, y1, x2, y2, dis);
return 0;
}
