#include <string.h>

struct Book//Defining Book structure
{
    char Title[50];
    char Author[50];
    double Price;
    float Rating;
};
void main() 
{
	int i,n,x;
	struct Book b1[n];//Creating book variable 
	printf("Enter no.of Books:"); //Entering no.of books 
	scanf("%d",&x);
	for(i=0;i<x;i++) //Using for loop to enter multiple inputs
		{
  		//Asking user to input values
		printf("\nEnter %d Book details",i+1);
		printf("\nEnter Title:");
  		scanf("%s",b1[i].Title);
  		printf("Enter Author:");
  		scanf("%s",b1[i].Author);
  		printf("Enter Price:");
  		scanf("%lf",&b1[i].Price);
  		printf("Enter Rating:");
  		scanf("%f",&b1[i].Rating);
		}
		for(i=0;i<x;i++)
			if(b1[i].Price<500 && b1[i].Rating>4.0) //Using if-condition to satisfy given conditions
			{
				//Printing Final details
				printf("\n<<<<%d Book details>>>>\n",i+1);
				printf("\nBook-Title | Author | Price | Rating: " );
  				printf("\n\t%s \t%s \t%-7.lf %-81.f\n",b1[i].Title, b1[i].Author, b1[i].Price, b1[i].Rating);
			}
			else
			{
				printf("\nBOOK NOT FOUND");	
			}
}

