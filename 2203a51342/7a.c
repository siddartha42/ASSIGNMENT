#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LEN 1024

int main() {
    char data[MAX_LINE_LEN];
    char file_name[] = "data.txt";
    FILE *fp;
    
    /* Take user input */
    printf("Enter text to append: ");
    fgets(data, MAX_LINE_LEN, stdin);
    
    /* Open file in appending mode */
    fp = fopen(file_name, "a+");
    
    /* Check if file was opened successfully */
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }
    
    /* Append data to file */
    fprintf(fp, "%s", data);
    
    /* Close file */
    fclose(fp);
    
    printf("Data appended successfully to file %s.\n", file_name);
    
    return 0;
}       

