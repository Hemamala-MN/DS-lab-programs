#include<stdio.h>
#define SIZE 100

struct student
{
        int id;
        int age;
        int marks;
};
void accept_input(struct student*s1 )
 {
    printf("Enter the id\n");
    scanf("%d",&s1->id);
    printf("Enter the age\n");
    scanf("%d",&s1->age);
    printf("Enter the marks\n");
    scanf("%d",&s1->marks);
 }
 void display(struct student*s1)
 {
     printf("Student id=%d\n",s1->id);
     printf("Student age=%d\n",s1->age);
     printf("Student marks=%d\n",s1->marks);
 }
 int main()
{
    struct student s[SIZE];
    int i,no_students,j;
    printf("Enter the number of students\n");
    scanf("%d",&no_students);
    for(i=0;i<no_students;i++)
    {
        accept_input(&s[i]);

    }
    for(j=0;j<no_students;j++)
    {
        display(&s[j]);

    }
    return 0;
}
