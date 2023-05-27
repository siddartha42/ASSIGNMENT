#include <stdio.h>
//creating a employee structure
struct Employee 
{
  char name[50];
  int id;
  double salary;
};

void main() {
  int n, i;
  double total_salary = 0;

  printf("Enter the number of employees: ");//entering no.of employess
  scanf("%d", &n);

  struct Employee e1[n];//creating employee structure variable with size "n"

  for (i = 0; i < n; i++)
  {
    //asking user to enter the values of employee structure
    printf("\nEnter details of employee %d:\n", i+1);
    printf("Name: ");
    scanf("%s", e1[i].name);
    printf("ID: ");
    scanf("%d", &e1[i].id);
    printf("Salary: ");
    scanf("%lf", &e1[i].salary);

    total_salary += e1[i].salary;//Adding the salaries
  }

  printf("\nTotal salary of all employees: %.2lf\n", total_salary);//displaying the total salary

  return 0;
}     

