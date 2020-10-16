#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Task
Print a pattern of numbers from n to 1. Each of the numbers is separated by a single space.
Input Format
The input will contain a single integer n.
*/
int main()
{
    int n;
    scanf("%d", &n);
    int length=n*2 - 1;
    for(int row = 0; row < length; row++)
    {
        for(int col = 0; col < length; col++)
        {
            int m = row;
            if(m>col)m=col;
            if(m>length - row - 1)m=length - row - 1;
            if(m>length - col - 1)m=length - col - 1;
            printf("%d ", n - m);
        }
        printf("\n");
    }
    return 0;
}
