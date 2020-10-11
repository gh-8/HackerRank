#include <stdio.h>

void update(int *a,int *b) {
    int temp1=*a + *b;
    int temp2=abs(*a - *b);
    *a = temp1;
    *b = temp2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
/*
Task
Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.
Input Format
The input will contain two integers a and b separated by a newline.
Output Format
Modify the two values in place and the code stub main() will print their values.
*/
