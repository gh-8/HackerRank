#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
/*
Task:
You will be given  queries. Each query is of one of the following three types:
1 x: Add an element  to the set.
2 x: Delete an element  from the set. (If the number  is not present in the set, then do nothing).
3 x: If the number x is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
Input Format
The first line of the input contains n the number of queries. The next lines contains a query each. Each query consists of two integers  and  where  is the type of the query and is an integer.
*/
int main() {
    int n;
    set<int> s;

    cin>>n;
    int y,x;
    for(int i=0;i<n;i++){
        cin>>y >>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else if(y==3){
            if(s.find(x)!=s.end()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
