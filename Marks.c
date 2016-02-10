#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int maths;
	int science;
}Marks;

int main()
{
	Marks *info;
	int no_of_students = 0;
	printf ("Input the total number of students : ");
	scanf ("%d",&no_of_students);
	info = (struct node *) malloc (no_of_students * sizeof (Marks));
	int count = 1;
	int a,b;
	while ( no_of_students > 0 )
	{
		printf ("Input Maths marks for student %d : ", count );
		scanf ("%d",&a);
		printf ("Input Science marks for student %d : ", count );
                scanf ("%d",&b);
		info[count-1].maths = a;
		info[count-1].science = b;
		no_of_students--;
		count++;
	}
	
	
	
	return 0;
}
