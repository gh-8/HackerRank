#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    int i=0,sum =0;
    if(gender=='g')i=1;
    for(i;i<=number_of_students;i+=2){
        sum += marks[i];
    }
    return sum;
}
/*
Task
Complete the function, marks_summation which returns the total sum of grades for a specified gender
Input Format
The first line contains the total number of students
Each of the subsequent lines contains a grade entry alternating for boys and girls in th class.
The last line contains the gender.
*/
int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
