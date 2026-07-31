#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void analysis(struct Student s[], int n) {
    float totmarks = 0;
    int highestidx = 0;

    for (int i = 0; i < n; i++) {
        totmarks += s[i].marks;
        if (s[i].marks >= s[highestidx].marks) {
            highestidx = i;
        }
    }

    float averageMarks = totmarks/ n;

    printf("\nClass Analysis\n");
    printf("Class Average Marks: %.2f\n", averageMarks);
    printf("\n=== Highest Scorer ===\n");
    printf("Roll Number: %d\n", s[highestidx].roll);
    printf("Name: %s\n", s[highestidx].name);
    printf("Marks: %.2f\n", s[highestidx].marks);
}

int main() {
    struct Student s[5];

    printf("Enter details for 5 students\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);
        
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    analysis(s, 5);

    return 0;
}
