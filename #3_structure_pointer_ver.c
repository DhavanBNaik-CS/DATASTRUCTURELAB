#include <stdio.h>
#define SIZE 100
struct student
{
    int id;
    int age;
    int marks;
};
void accept_input( struct student *s1)
{
    printf("Enter Id : ");
    scanf("%d", &s1->id);
    printf("Enter age : ");
    scanf("%d", &s1->age);
    printf("Enter marks : ");
    scanf("%d", &s1->marks);
}
void display_output( struct student *s1)
{
    printf("student details :\n");
    printf("ID - %d\t", s1->id);
    printf("AGE - %d\t", s1->age);
    printf("MARKS - %d\t \n", s1->marks);
    
    
}

int main()
{
        struct student s[SIZE];
    int no_of_students;
    printf("Enter the no.of students : ");
    scanf("%d", &no_of_students);
    for(int i=0;i<no_of_students;i++)
    {
        accept_input(&s[i]);
    }
    for(int i=0;i<no_of_students;i++)
    {
        display_output(&s[i]);
    }
    return 0;
}