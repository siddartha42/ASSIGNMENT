#include <stdio.h>

int main() {
   FILE *fp;
   char ch;

   fp = fopen("data.txt", "r");
   if (fp == NULL) {
      printf("Error opening file");
      return 1;
   }

   printf("Contents of data.txt:\n\n");
   while ((ch = getc(fp)) != EOF)
      putchar(ch);

   fclose(fp);
   return 0;
}   
