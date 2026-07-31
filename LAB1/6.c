#include <stdio.h>

struct Student{
    int roll;
    char name[50];
    float marks;
};
void display(struct Student s[],int n)
{
   printf("\n------------------------------------------------\n");
    printf("%-12s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%-12d %-20s %-10.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    printf("------------------------------------------------\n");
}
int main()
{
    struct Student s[5];
    for(int i=0;i<5;i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);
        
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        
    }
    display(s,5);
    return 0;
}
