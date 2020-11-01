#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
/*
Task
Given a text file with many lines of numbers to format and print, for each row of  space-separated doubles, format and print the numbers using the specifications in the Output Format section below.
Input Format
The first line contains an integer, T the number of test cases.
Each of the  subsequent lines describes a test case as  space-separated floating-point numbers: A, B, and C respectively.
*/
        cout << hex << left << showbase << nouppercase << (long long) A << endl;

        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << endl;

        cout << scientific << uppercase << noshowpos << setprecision(9) << C << endl;

	}
	return 0;

}
