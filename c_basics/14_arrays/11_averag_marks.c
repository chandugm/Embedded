//11) Write a function to return the average of marks of all students in a class.
#include<stdio.h>
float average_student(int sum, int subjects);
int main() {
	int i, j, marks, subjects = 6, students;
	float average;
	printf("Enter number of students: ");
	scanf("%d", &students);
	float avg[students];
	for (i = 1; i <= students; i++) 
	{
		printf("Enter marks of %d student: ", i);
		int sum=0;
		for (j = 1; j <= subjects; j++) 
		{
			scanf("%d", &marks);
			sum += marks;
		}
		avg[i] = average_student(sum, subjects);
	}
	for (int i=1;i<=students;i++)
	{
		printf("The average of student %d is %.2f\n", i, avg[i]);
	}

return 0;
}
float average_student(int sum, int subjects) {
	float average;
	average = (float) sum / subjects;
	return average;
}

