#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/*
Task
You have to create a struct, named Student, representing the student's details, and store the data of a student.
Input Format
Input will consist of four lines.
The first line will contain an integer, representing age.
The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.
Note: The number of characters in first_name and last_name will not exceed 50.
*/
struct Student{
    int age;
    string first_name,last_name;
    int standard;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
