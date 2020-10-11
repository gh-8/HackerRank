#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1=0,n2=0;
    float f1=0,f2=0;
    scanf("%d %d", &n1, &n2);
    scanf("%f %f", &f1, &f2);

    printf("%d %d\n", n1+n2, n1-n2);
    printf("%0.1f %0.1f\n", f1+f2, f1-f2);

    return 0;
}
/*
Task
Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.
Input Format
The first line contains two integers.
The second line contains two floating point numbers.
Output Format
Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to  decimal place) separated by a space on the second line.
*/
