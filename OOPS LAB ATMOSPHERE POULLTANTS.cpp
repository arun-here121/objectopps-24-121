#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pollutant;
    double gramsPerMile, odometer, limit;

    cout << "(1) Carbon monoxide\n";
    cout << "(2) Hydrocarbons\n";
    cout << "(3) Nitrogen oxides\n";
    cout << "(4) Nonmethane hydrocarbons\n";
    cout << "Enter pollutant number>> ";
    cin >> pollutant;

    cout << "Enter number of grams emitted per mile>> ";
    cin >> gramsPerMile;

    cout << "Enter odometer reading>> ";
    cin >> odometer;

    // Decide emission limit using pollutant and odometer
    switch (pollutant) {
        case 1: // Carbon monoxide
            if (odometer <= 50000)
                limit = 3.4;
            else
                limit = 4.2;
            break;

        case 2: // Hydrocarbons
            if (odometer <= 50000)
                limit = 0.31;
            else
                limit = 0.39;
            break;

        case 3: // Nitrogen oxides
            if (odometer <= 50000)
                limit = 0.40;
            else
                limit = 0.50;
            break;

        case 4: // Nonmethane hydrocarbons
            if (odometer <= 50000)
                limit = 0.25;
            else
                limit = 0.31;
            break;

        default:
            cout << "Invalid pollutant number!" << endl;
            return 0;
    }

    cout << fixed << setprecision(2);
    if (gramsPerMile > limit)
        cout << "Emissions exceed permitted level of " << limit << " grams/mile." << endl;
    else
        cout << "Emissions are within the permitted level of " << limit << " grams/mile." << endl;

    return 0;
}

