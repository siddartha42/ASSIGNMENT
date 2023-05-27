
//1)Defining Student structure
struct Student 
{
	char name[20];
	int roll;
	float marks;
};
void main()
{
	struct Student s;//Creating Student structure variable
	struct Student *ps; //Creating pointer structure variable
	ps=&s; // assigning address of student s to pointer *ps
	
	
//4.1 inserting the values into Student using pointer *ps
	printf("\nEnter Student-name\trollno\tmarks:\n");
	scanf("%s %d %f",ps->name,&ps->roll,&ps->marks);
	
	
//4.2 printing student details using pointer *ps
	printf("\nStudent-name\trollno\tmarks:\n");
	printf("\n--------------------------------------------------------");
	printf("\n%-15s %-7d %.1f",ps->name,ps->roll,ps->marks);
}  

