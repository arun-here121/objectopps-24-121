#include <iostream>
using namespace std;

int main() {
    int marks[5], total = 0;
    float average, percentage;
    char grade;

    cout << "Enter marks of 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    if (percentage >= 90) grade = 'A';
    else if (percentage >= 75) grade = 'B';
    else if (percentage >= 50) grade = 'C';
    else grade = 'F';

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}

