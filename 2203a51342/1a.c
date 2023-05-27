#include<stdio.h>
//1  Defining Employee structure
struct Employee
{
char name[20]; 
int id;
float salary;
};
void main( )
{
//2 creating employee structure variable
struct Employee e;
//4.1 Inserting values into employee structure
printf("\nEnter Employee-name | ID | salary");
scanf("%s %d %f",e.name,&e.id,&e.salary);
//4.2 Printing values of employee structure
printf("\nEmployee-name | ID | salary ");
printf("\n%-14s %-5d %-9f", e.name, e.id,e.salary);
}   
