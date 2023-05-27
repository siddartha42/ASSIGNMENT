#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LEN 1000

int main(int argc, char *argv[]) {
	int i;
  if (argc != 3) {
    printf("Usage: %s <n> <filename>\n", argv[0]);
    return 1;
  }

  int n = atoi(argv[1]);
  if (n <= 0) {
    printf("n must be a positive integer\n");
    return 1;
  }

  FILE *fp = fopen(argv[2], "r");
  if (fp == NULL) {
    printf("Could not open file: %s\n", argv[2]);
    return 1;
  }

  char line[MAX_LINE_LEN];
  for (i = 0; i < n && fgets(line, MAX_LINE_LEN, fp) != NULL; i++) {
    printf("%s", line);
  }

  fclose(fp);
  return 0;
}   
