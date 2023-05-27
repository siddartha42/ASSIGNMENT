#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[20];
};

int compare(const void *a, const void *b) {
    const struct student s1 = *(const struct student *)a;
    const struct student s2 = *(const struct student *)b;
    return s1.roll - s2.roll;
}

int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student *students[n];
    for ( i = 0; i < n; i++) {
        students[i] = malloc(sizeof(struct student));
        printf("Enter roll and name of student %d: ", i + 1);
        scanf("%d %s", &students[i]->roll, students[i]->name);
    }

    qsort(students, n, sizeof(struct student *), compare);

    printf("Sorted list based on roll numbers in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d %s\n", students[i]->roll, students[i]->name);
        free(students[i]);
    }

    return 0;
} 

