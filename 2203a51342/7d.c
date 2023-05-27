#include<stdio.h>

struct student {
    int roll_number;
    char name[50];
    float marks;
};

int main() {
    FILE *file;
    struct student s;
    int roll_number, found = 0;

    printf("Enter the roll number of the student to search: ");
    scanf("%d", &roll_number);

    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    while (fread(&s, sizeof(struct student), 1, file)) {
        if (s.roll_number == roll_number) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Roll Number: %d\n", s.roll_number);
        printf("Name: %s\n", s.name);
        printf("Marks: %.2f\n", s.marks);
    } else {
        printf("Student not found\n");
    }

    fclose(file);
    return 0;
}   
