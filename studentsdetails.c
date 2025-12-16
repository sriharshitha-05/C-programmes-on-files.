#include <stdio.h>

struct Student {
    char name[20];
    int rollno;
    int marks[6];
    float percentage;
};

int main() {
    struct Student s[3];
    int i, j, total;

    for (i = 0; i < 3; i++) {
        total = 0;
        printf("Enter name and roll no:\n");
        scanf("%s %d", s[i].name, &s[i].rollno);

        printf("Enter marks of 6 subjects:\n");
        for (j = 0; j < 6; j++) {
            scanf("%d", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        s[i].percentage = total / 6.0;
    }

    printf("\nName\tRollNo\tPercentage\n");
    for (i = 0; i < 3; i++) {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].rollno, s[i].percentage);
    }

    return 0;
}

