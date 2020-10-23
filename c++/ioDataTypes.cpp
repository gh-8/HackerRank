#include <iostream>
#include <cstdio>
using namespace std;
/*
Task
Read and store inputs in a correct data type then output each of them in a new line
Input Format
Input consists of the following space-separated values: int, long, char, float, and double, respectively.
*/
int main() {
    int my_int;
    long my_long;
    char my_char;
    float my_float;
    double my_double;
    scanf("%d %ld %c %f %lf",&my_int,&my_long,&my_char,&my_float,&my_double);
    printf("%d\n%ld\n%c\n%f\n%lf\n",my_int,my_long,my_char,my_float,my_double);
    return 0;
}
