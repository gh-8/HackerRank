#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Task
Given a five digit integer, print the sum of its digits.
Input Format
The input contains a single five digit number, n
Output Format
Print the sum of the digits of the five digit number.
*/
int main() {

    int n;
    scanf("%d", &n);
    if(n<10000 || n>99999)return 0;
    int sum=0,prev = n,mod = 0,tenten = 10;;
    for(int i=0;i<=4;i++)
    {
        mod= prev%(tenten);
        tenten = tenten/10;
        sum = sum + (mod/tenten);
        prev = prev - mod;
        tenten = tenten*10*10;
    }
    printf("%d", sum);
    return 0;
}
