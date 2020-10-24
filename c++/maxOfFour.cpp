#include <iostream>
#include <cstdio>
using namespace std;

/*
Task
Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.
Input Format
Input will contain four integers a,b,c,d one per line.
*/
int max_of_four(int a, int b, int c, int d){
    int max = a;
    if(b>=max) max=b;
    if(c>=max) max=c;
    if (d>=max) max=d;
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
