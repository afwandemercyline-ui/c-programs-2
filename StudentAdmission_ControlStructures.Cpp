/*Lumumba Mercyline Afwande 
CT101/G/28529/25
A C++ program to check student's age and decide if they're eligible for admission 
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age;
    double score;

    // Get student details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> score;

    cout << "\n========== ADMISSION RESULT ==========\n";
    cout << "Student Name: " << studentName << endl;

    // Nested if
    if (age >= 18) {

        if (score >= 50) {
            cout << "Decision: Admitted" << endl;
        }
        else {
            cout << "Decision: Not Admitted: Low Score" << endl;
        }

    }
    else {
        cout << "Decision: Not Admitted: Underage" << endl;
    }

    cout << "======================================\n";

    return 0;
}