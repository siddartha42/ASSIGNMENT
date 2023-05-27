#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student 
{
    int id;
    char name[50];
    int age;
    float percentage;
};

void create()
 {
    FILE *fp;
    struct student s;

    fp = fopen("students.dat", "ab");
    printf("\nEnter student details:\n");
    printf("ID: ");
    scanf("%d", &s.id);
    printf("Name: ");
    scanf("%s", s.name);
    printf("Age: ");
    scanf("%d", &s.age);
    printf("Percentage: ");
    scanf("%f", &s.percentage);
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);
}

void read() {
    FILE *fp;
    struct student s;

    fp = fopen("students.dat", "rb");
    printf("\nStudent details:\n");
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        printf("ID: %d\n", s.id);
        printf("Name: %s\n", s.name);
        printf("Age: %d\n", s.age);
        printf("Percentage: %.2f\n", s.percentage);
        printf("\n");
    }
    fclose(fp);
}

void update() {
    FILE *fp;
    struct student s;
    int id, found = 0;

    fp = fopen("students.dat", "rb+");
    printf("\nEnter student ID to update: ");
    scanf("%d", &id);
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        if (s.id == id) {
            found = 1;
            printf("\nEnter new student details:\n");
            printf("ID: ");
            scanf("%d", &s.id);
            printf("Name: ");
            scanf("%s", s.name);
            printf("Age: ");
            scanf("%d", &s.age);
            printf("Percentage: ");
            scanf("%f", &s.percentage);
            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);
            break;
        }
    }
    if (!found) {
        printf("\nStudent not found.\n");
    }
    fclose(fp);
}

void delete() {
    FILE *fp, *temp;
    struct student s;
    int id, found = 0;

    fp = fopen("students.dat", "rb");
    temp = fopen("temp.dat", "wb");
    printf("\nEnter student ID to delete: ");
    scanf("%d", &id);
    while (fread(&s, sizeof(s), 1, fp) == 1) {
        if (s.id != id) {
            fwrite(&s, sizeof(s), 1, temp);
        } else {
            found = 1;
        }
    }
    if (!found) {
        printf("\nStudent not found.\n");
    } else {
        printf("\nStudent deleted successfully.\n");
    }
    fclose(fp);
    fclose(temp);
    remove("students.dat");
    rename("temp.dat", "students.dat");
}

int main() {
    int choice;

    while (1) {
        printf("\nFile Management System\n");
        printf("-----------------------\n");
        printf("1. Create\n");
        printf("2. Read\n");
        printf("3. Update\n");
        printf("4. Delete\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                read();
                break;
            case 3:
                update();
                break;
            case 4:
                delete();
                break;
            case 5:
                exit(0);
            default:
                printf("\nInvalid choice.\n");
        }
    }

    return 0;
}    
