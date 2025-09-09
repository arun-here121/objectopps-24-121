#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    int failCount = 0;

    // Input marks for 5 subjects
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << (i + 1) << ": ";
        cin >> marks[i];
        total += marks[i];

        if (marks[i] < 40) { // Assume 40 is the passing mark
            failCount++;
        }
    }

    // Check if student failed in more than one subject
    if (failCount > 1) {
        cout << "Repeat Year" << endl;
    } 
    else {
        // Calculate percentage
        double percentage = total / 5.0;

        // Assign grade using nested if-else
        if (percentage >= 90) {
            cout << "Grade: A" << endl;
        } 
        else {
            if (percentage >= 75) {
                cout << "Grade: B" << endl;
            } 
            else {
                if (percentage >= 60) {
                    cout << "Grade: C" << endl;
                } 
                else {
                    if (percentage >= 40) {
                        cout << "Grade: D" << endl;
                    } 
                    else {
                        cout << "Grade: F" << endl;
                    }
                }
            }
        }
    }

    return 0;
}

