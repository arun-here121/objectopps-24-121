#include <iostream>
using namespace std;

// Function to check if year is leap year
bool isLeap(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        } else
            return true;
    } else
        return false;
}

// Function to validate date
bool isValidDate(int d, int m, int y) {
    if (y < 1) return false;       // Year must be positive
    if (m < 1 || m > 12) return false; // Invalid month

    int daysInMonth;

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        daysInMonth = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        daysInMonth = 30;
    else if (m == 2) {
        if (isLeap(y))
            daysInMonth = 29;
        else
            daysInMonth = 28;
    } else
        return false;

    return (d >= 1 && d <= daysInMonth);
}

// Function to calculate day of week (Zeller’s Congruence)
int getDayOfWeek(int d, int m, int y) {
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;
    int h = (d + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    // h = 0 ? Saturday, 1 ? Sunday, 2 ? Monday, ...
    return h;
}

int main() {
    int d, m, y;
    cout << "Enter date (DD MM YYYY): ";
    cin >> d >> m >> y;

    if (!isValidDate(d, m, y)) {
        cout << "Invalid Date!" << endl;
    } else {
        cout << "Valid Date." << endl;

        int dayCode = getDayOfWeek(d, m, y);

        switch (dayCode) {
            case 0: cout << "Day of Week: Saturday" << endl; break;
            case 1: cout << "Day of Week: Sunday" << endl; break;
            case 2: cout << "Day of Week: Monday" << endl; break;
            case 3: cout << "Day of Week: Tuesday" << endl; break;
            case 4: cout << "Day of Week: Wednesday" << endl; break;
            case 5: cout << "Day of Week: Thursday" << endl; break;
            case 6: cout << "Day of Week: Friday" << endl; break;
        }
    }

    return 0;
}

