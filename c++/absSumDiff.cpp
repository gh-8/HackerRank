#include <stdio.h>
#include<math.h>

/*
Task
The function is declared with a void return type, so there is no value to return. Modify the values in memory so that a contains their sum and  b contains their absoluted difference.
Input Format
Input will contain two integers a and b separated by a newline.
*/
void update(int *a,int *b) {
    int temp1 = *a + *b;
    int temp2 = abs(*a - *b);
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
