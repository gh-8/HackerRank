#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Task
You are given n integers. Sort the n integers and print the sorted order.
Store the n integers in a vector.
Input Format
The first line of the input contains n where n is the number of integers. The next line contains n integers.
*/
int main() {

    vector<int> v;
    int n,m;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i]<< " ";
    }
    return 0;
}
