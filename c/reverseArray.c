#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Task
Given an array of size n, reverse it.
Input Format
The first line contains an integer n, denoting the size of the array. The next line contains  space-separated integers denoting the elements of the array.
Output Format
The output is handled by the code given in the editor, which would print the array.
*/
int main(){
    int n=0;
    scanf("%d", &n);
    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
