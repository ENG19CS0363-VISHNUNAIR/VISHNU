//WAP to find the sum of n fractions.
#include<stdio.h>
struct fract
{
int num;
int den;
};
typedef struct fract fraction;
fraction input()
{
fraction a;
printf("enter the numerator ");
scanf("%d",&a.num);
printf("enter the denominator ");
scanf("%d",&a.den);
return a;
}
fraction sum(fraction a,fraction b)
{
fraction result;
if(a.den==b.den)
{
result.den=a.den;
result.num=a.num+b.num;
}
else
{
result.den=a.den*b.den;
result.num=(a.num*b.den)+(b.num*a.den);
}
return result;
}
int main()
{
int n;
printf("enter the number of fractions");
scanf("%d",&n);
fraction x,a[n];
x.num=0;
x.den=1;
for(int i=0;i<n;i++)
{
printf("for fraction %d",(i+1));
a[i]=input();
}
for(int i=0;i<n;i++)
{
x=sum(x,a[i]);
}
printf("the final sum is %d %d which is %.2f%",x.num,x.den,(x.num/(1.0*x.den))*100);
return 0;
}
