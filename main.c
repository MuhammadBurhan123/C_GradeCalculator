#include <stdio.h>

int main() {
    // Declare variables
    int numOfSubjects, averageMarks, totalMarks = 0;
    char grade;

    // Initialize message for the number of subjects
    printf("Please enter the number of subjects that you want to calculate\n");
    scanf("%d", &numOfSubjects);

    // Strting For Loop for inputs
    for (int i = 1; i <= numOfSubjects; i++) {
        // Declaring marks variable
        int marks;
        // Getting input of marks of subjects
        printf("Enter the marks of subject %d: \n", i);
        scanf("%d", &marks);

        // Checking for marks of subject
        if (marks < 0 || marks > 100) {
            printf("Invalid marks entered for Subject %d. Marks should be between 0 and 100.\n", i);
            break;
        }

        // Calculating Total Marks
        totalMarks += marks;
    }

    // Calculating average marks
    averageMarks = totalMarks / numOfSubjects;

    // Calculating grade with average marks
    if (averageMarks >= 90) {
        grade = 'A';
    } else if (averageMarks >= 80) {
        grade = 'B';
    } else if (averageMarks >= 70) {
        grade = 'C';
    } else if (averageMarks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Writing answer
    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %d\n", averageMarks);
    printf("Final Grade: %c\n", grade);

    return 0;
}
