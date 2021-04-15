#include<stdio.h>
#include<string.h>
struct employee
{
char name[100];
float rate;
float hours;
float salary;
};
typedef struct employee employee;
struct workhour
{
char name1[100];
int timecard;
};
typedef struct workhour work;
employee input_1(int n,employee em[])
{
for(int i=0;i<n;i++)
{
printf("enter name and the rate:");
scanf("%s",em[i].name);
scanf("%f",&em[i].rate);
}
return em[n];
work input_n(int m,work wt[])
{
for(int i=0;i<m;i++)
{
printf("enter name and timecard");
scanf("%s",wt[i].name1);
scanf("%d",&wt[i].timecard);
}
return wt[m];
}
employee compute(int n,int m,employee em[],work wt[])
{
for(int i=0;i<n;i++)
{
float temp=0;
for(int j=0;j<m;j++)
{
if(!strcmp(em[i].name,wt[j].name1))
{
temp=temp+wt[j].timecard;
}
}
em[i].hours=temp/60;
em[i].salary=em[i].rate*em[i].hours;
}
return em[n];
}
void output(int n,employee em[])
{
for(int i=0;i<n;i++)
{
if(em[i].salary!=0)
{
printf("%s:%.2f,$ %.2f",em[i].name,em[i].hours,em[i].salary);
}
}
}
int main()
{
int n,m;
printf("enter the number of employee");
scanf("%d",&n);
employee em[n];
em[n]=input_1(n,em);
printf("enter the number of timecards:");
scanf("%d",&m);
work wt[m];
wt[m]=input_n(m,wt);
em[n]=compute(n,m,em,wt);
output(n,em);
return 0;
}
