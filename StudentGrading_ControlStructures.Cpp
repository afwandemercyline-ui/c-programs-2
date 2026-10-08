/*Lumumba Mercyline Afwande 
CT101/G/28529/25
A C++ program to implement students grading system 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int marks;
    char grade;

    // Get student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter exam marks: ";
    cin >> marks;

    // Determine grade
    if (marks >= 70) {
        grade = 'A';
    }
    else if (marks >= 60) {
        grade = 'B';
    }
    else if (marks >= 50) {
        grade = 'C';
    }
    else if (marks >= 40) {
        grade = 'D';
    }
    else {
        grade = 'E';
    }

    // Display result
    cout << "\n========== STUDENT RESULT ==========\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    cout << "====================================\n";

    return 0;
}