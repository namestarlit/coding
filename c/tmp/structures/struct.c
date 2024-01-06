#include <stdio.h>

struct student{
	int rollno;
	char name[20];
	float marks;
};

/**
 * main - structures
 *
 * Return: 0 (success)
 */
int main(void)
{
	struct student s1 = {1, "Tired", 90.91};
	struct student s2 = {2, "Very Tired", 80.5};

	puts("Info for s1");
	printf("%d %s %.2f\n", s1.rollno, s1.name, s1.marks);

	puts("\nInfo for s2");
	printf("%d %s %.2f\n", s2.rollno, s2.name, s2.marks);

	struct student s3;

	puts("Enter info for s3:");
	scanf("%d %s %f", &s3.rollno, s3.name, &s3.marks);

	puts("\nInfo for s3");
	printf("%d %s %.2f\n",s3.rollno, s3.name, s3.marks );

	return (0);
}
