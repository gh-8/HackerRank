#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
/*
Task
Create a class named  with the following specifications:
An instance variable named scores to hold a student's exam scores.
A void input() function that reads n integers and saves them to scores.
An int calculateTotalScore() function that returns the sum of the student's scores.
Input Format
Most of the input is handled for you by the locked code in the editor.
In the void Student::input() function, you must read n scores from stdin and save them to your instance variable.
*/
class Student {
    private:
        int scores[5]={0,0,0,0,0};
    public:
        void input(){
            for(int i=0; i<5; i++) {
                cin >> scores[i];
            }
            return;
        }
        int calculateTotalScore() {
            int totalScore = 0;
            for(int i=0;i<5;i++){
                totalScore += scores[i];
            }
            //cout << totalScore;
            return totalScore;
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
