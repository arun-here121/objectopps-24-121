#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    // BMI formula
    bmi = weight / (height * height);

    cout << fixed << setprecision(1);
    cout << "\nYour BMI is: " << bmi << endl;

    // BMI categories
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } 
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Category: Normal" << endl;
    } 
    else if (bmi >= 25.0 && bmi <= 29.9) {
        cout << "Category: Overweight" << endl;
    } 
    else {
        cout << "Category: Obese" << endl;
    }

    return 0;
}

