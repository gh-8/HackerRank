#include <iostream>
#include <sstream>
#include <string>

using namespace std;
/*
Task
You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element
Input Format
Input will consist of four lines.
The first line will contain an integer, representing the age. The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing the first_name of a student.
The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing the last_name of a student.
The fourth line will contain an integer, representing the standard of student.
*/
class Student{
    private:
        int age;
        int standard;
        string first_name;
        string last_name;
    public:
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }
        void set_standard(int a) {
            standard = a;
        }
        int get_standard() {
            return standard;
        }
        void set_first_name(string a) {
            first_name = a;
        }
        string get_first_name() {
            return first_name;
        }
        void set_last_name(string a) {
            last_name = a;
        }
        string get_last_name() {
            return last_name;
        }
        string to_string() {
            return std::to_string(age)+","+first_name+","+last_name+","+std::to_string(standard);
        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
