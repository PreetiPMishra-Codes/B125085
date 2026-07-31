#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n;
    struct Student* s;
    printf("enter the number of students");
    scanf("%d",&n);
   s = (struct Student*) malloc(n * sizeof(struct Student));

   for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    int highestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[highestIndex].marks) {
            highestIndex = i;
        }
    }
    printf("\n=== Top Scoring Student ===\n");
    printf("Roll Number: %d\n", s[highestIndex].roll);
    printf("Name: %s\n", s[highestIndex].name);
    printf("Marks: %.2f\n", s[highestIndex].marks);
    free(s);

    return 0;
}
