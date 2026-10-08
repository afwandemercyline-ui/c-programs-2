/*Lumumba Mercyline Afwande 
CT101/G/28529/25
A C++ program to calculate the average mark of a driving test
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks, average;

    // Get student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // Calculate average
    average = (theoryMarks + practicalMarks) / 2;

    // Display results
    cout << "\n========== DRIVING TEST RESULT ==========\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Theory Marks: " << theoryMarks << endl;
    cout << "Practical Marks: " << practicalMarks << endl;
    cout << "Average Score: " << average << endl;

    if (average >= 50) {
        cout << "Result: PASSED" << endl;
    } else {
        cout << "Result: FAILED" << endl;
    }

    cout << "=========================================\n";

    return 0;
}