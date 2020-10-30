#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Task
You are given  nintegers in sorted order. Also, you are given n queries. In each query, you will be given an integer and you have to tell whether that integer is present in the array. If so, you have to tell at which index it is present and if it is not present, you have to tell the index at which the smallest integer that is just greater than the given number is present.
Input Format
The first line of the input contains the number of integers. The next line contains  integers in sorted order. The next line contains , the number of queries. Then  lines follow each containing a single integer.
Note: If the same number is present multiple times, you have to print the first index at which it occurs. Also, the input is such that you always have an answer for each query.
*/
int main() {
   int n, val;
   cin >> n;
   vector<int> v;
   for (int i=0; i<n; i++){
       cin >> val;
       v.push_back(val);
   }
   n=0; val=0;
   vector<int>::iterator low;
   cin >> n;
   for (int i=0; i<n; i++){
       cin >> val;
       low = lower_bound(v.begin(), v.end(), val);
       if (v[low - v.begin()] == val)
           cout << "Yes " << low-v.begin()+1 << endl;
       else
           cout << "No " << low-v.begin()+1 << endl;
   }
   return 0;
}
