#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Task
calculate the max given the following parameters:
int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered
Input Format
The only line contains  space-separated integers n and k.
Output Format
Print the maximum values for the and, or and xor comparisons, each on a separate line.
*/
void calculate_the_maximum(int n, int k) {
    int max_And = 0,max_Or = 0,max_Xor = 0;
    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (((i&j) > max_And) && ((i&j) < k)) {
                max_And = i&j;
            }
            if (((i|j) > max_Or) && ((i|j) < k)) {
                max_Or = i|j;
            }
            if (((i^j) > max_Xor) && ((i^j) < k)) {
                max_Xor = i^j;
            }
        }
    }
    printf("%d\n%d\n%d\n", max_And, max_Or, max_Xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
