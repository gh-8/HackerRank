#include <iostream>
#include <cstdio>
using namespace std;
/*
Task
In this challenge, you will use a for loop to increment a variable through a range.
Input Format
You will be given two positive integers n and m, separated by a newline.
*/
int main() {
    int n=0,m=0;
    cin >> n;
    cin >> m;
    for(int i = n;i<=m;i++){
        if(i>=0 && i<=9){
            if(i==0) cout<<"zero"<<endl;
            else if(i==1) cout<<"one"<<endl;
            else if(i==2) cout<<"two"<<endl;
            else if(i==3) cout<<"three"<<endl;
            else if(i==4) cout<<"four"<<endl;
            else if(i==5) cout<<"five"<<endl;
            else if(i==6) cout<<"six"<<endl;
            else if(i==7) cout<<"seven"<<endl;
            else if(i==8) cout<<"eight"<<endl;
            else if(i==9) cout<<"nine"<<endl;
        }
        else{
            if(i%2==0) cout << "even"<<endl;
            else cout << "odd"<<endl;
        }
    }
    return 0;
}
