#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    bool isLeap = false;

    // Nested if-else to check leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeap = true;
            } else {
                isLeap = false;
            }
        } else {
            isLeap = true;
        }
    } else {
        isLeap = false;
    }

    if (isLeap) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is NOT a Leap Year." << endl;
        cout << "Next 5 Leap Years: ";
        int count = 0;
        int nextYear = year + 1;

        // Find next 5 leap years
        while (count < 5) {
            bool nextLeap = false;
            if (nextYear % 4 == 0) {
                if (nextYear % 100 == 0) {
                    if (nextYear % 400 == 0)
                        nextLeap = true;
                } else {
                    nextLeap = true;
                }
            }
            if (nextLeap) {
                cout << nextYear << " ";
                count++;
            }
            nextYear++;
        }
        cout << endl;
    }

    return 0;
}

