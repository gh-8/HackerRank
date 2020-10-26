#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Task
You will be given an array of n integers and you have to print the integers in the reverse order.
Input Format
The first line of the input contains n the number of integers.The next line contains  space-separated integers.
*/
int main() {
    int n=0;
    cin >> n;
    int arr[n]={};
    for(int i=n-1;i>=0;i--){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
