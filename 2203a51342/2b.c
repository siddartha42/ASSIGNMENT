#include <stdio.h>
#include <string.h>

struct Address //Defining address structure
{
    char street[50];
    char city[50];
    int pin;
};

struct Person //Defining person structure
{
    char name[50];
    struct Address a; //Creating address structure variable
};

void main() 
{
	int i,n,b;
	struct Person p1[n];  //Creating person structure variable
  printf("Enter no.of persons:"); //Entering no.of persons 
  scanf("%d",&b);
  for(i=0;i<b;i++) //Using for loop to enter multiple inputs
	{
  //Asking user to input values
	printf("\nEnter %d person details",i+1);
	printf("\nEnter name:");
  scanf("%s",p1[i].name);
  printf("Enter street:");
  scanf("%s",p1[i].a.street);
  printf("Enter city:");
  scanf("%s",p1[i].a.city);
  printf("Enter pin:");
  scanf("%d",&p1[i].a.pin);
	}
	for(i=0;i<b;i++)  //Using for loop to print multiple persons details
	{
  //Printing Final details
	printf("\n<<<<%d Person details>>>>\n",i+1);
	printf("Name: %s\n", p1[i].name);
  printf("Address: %s, %s - %d\n", p1[i].a.street, p1[i].a.city, p1[i].a.pin);
	}
    
}     

