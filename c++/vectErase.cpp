#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*
Task
You are provided with a vector of n integers. Then, you are given 2 queries.
For the first query, you are provided with n integer, which denotes a position in
the vector. The value at this position in the vector needs to be erased. The next
query consists of integers denoting a range of the positions in the vector. The
elements which fall under that range should be removed. The second query is performed
on the updated vector which we get after performing the first query.
Input Format
The first line of the input contains an integer n.The next line contains n
space separated integers(1-based index).The third line contains a single integer n,
denoting the position of an element that should be removed from the vector.The fourth
line contains two integers  and  denoting the range that should be erased from
the vector inclusive of a and exclusive of b.
*/
int main() {
    int n, temp;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }

    cin >> temp;
    if( temp < v.size() )
        v.erase(v.begin() + temp - 1);

    int a, b;
    cin >> a >> b;

    if((a<b) && (b<v.size()))
        v.erase(v.begin() + a - 1, v.begin() + b - 1);

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
