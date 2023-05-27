#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n,i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    FILE *fp;
    fp = fopen("students.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file");
        exit(1);
    }
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        fwrite(&s[i], sizeof(struct student), 1, fp);
    }
    fclose(fp);
    printf("\nData written to file successfully.\n");
    return 0;
}    
