#include<stdio.h>
struct student
{
char name[100];
int scores[100];
float avg;
char grade;
};
typedef struct student students;
struct gradebook
{
char course[100];
float weights[100];
int n_students;
int n_scores;
struct students st[100];
};
typedef struct gradebook gradebook;
students input_one_student(int n_scores)
{
students s;
scanf("%s",s.names);
for(int i=0;i<n_scores;i++)
{
scanf("%d",&s.scores[i]);
}
return s;
}
gradebook input_one_gradebook()
{
gradebook gb;
scanf("%s",&gb.course);
scanf("%d %d",&gb.n_students &gb.n_scores);
for(int i=0;i<gb.n_scores;i++)
{
scanf("%f",&gb.weights[i]);
}
for(int i=0;i<gb.n_scores;i++)
{
gb.st[i]=input_one_student(gb.n_scores);
}
return gb;
}
void input_n_gradebook(int n,gradebook gb[n])
{
for(int i=0;i<n;i++)
{
gb[i]=input_one_gradebook();
}
}
char grade_compute(students s)
{
if(s.avg>=0 && s.avg<60)
s.grade='F';
else if(s.avg>=60 && s.avg<70)
s.grade='D';
else if(s.avg>=70 && s.avg<80)
s.grade='C';
else if(s.abg>=80 && s.avg<90)
s.grade='B';
else
s.grade='A';
return s.grade;
}
compute_grade_ome_student(gradebook*pgb)
{
float total_weights=0.0;
float sum;
for(int i=0;i<pgb->n_scores;i++)
{
total_weights=total_weights+pgb->weights[i];
}
for
