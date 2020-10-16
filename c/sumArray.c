#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Task
Find and output the sum of integer inputs.
Input Format
The first line contains an integer n.
The next line contains space-separated integers to be summed.
*/
int main() {
    int n=0,sum=0;
    scanf("%d",&n);
    int *arr = malloc(n * sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
        sum+=arr[i];
    }
    printf("%d ",sum);
    return 0;
}
