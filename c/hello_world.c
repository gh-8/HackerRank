#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    printf("Hello, World!\n");
    printf("%s",s);
    return 0;
}

/*
Task
This challenge requires you to print  on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.
Example
s = "Life is beautiful"

The required output is:
Hello, World!
Life is beautiful

Complete the main() function below.
The main() function has the following input:
string s: a string

Prints
*two strings: * "Hello, World!" on one line and the input string on the next line.
Input Format
There is one line of text, .
*/
