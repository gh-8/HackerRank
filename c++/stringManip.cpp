#include <iostream>
#include <string>
using namespace std;
/*
Task
In the first line print two space-separated integers, representing the length of s1 and s2 respectively.
In the second line print the string produced by concatenating them.
In the third line print two strings separated by a space, except that their first characters are swapped.
Input Format
You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

*/
int main() {
    string s1, s2;
    char temp;
    cin >> s1;
    cin >> s2;

    cout << s1.size() << " "<< s2.size() << endl;
    cout << s1+s2 << endl;
    temp = s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    cout << s1 << " " << s2 << endl;

    return 0;
}
