#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double purchaseTotal, discount = 0.0, discountedTotal, tax, finalTotal;
    char isTeacher;

    cout << "Enter total purchases: $";
    cin >> purchaseTotal;

    cout << "Is the purchaser a teacher? (Y/N): ";
    cin >> isTeacher;

    // Convert to uppercase for safety
    if (isTeacher == 'y' || isTeacher == 'Y') {
        // Teacher discount conditions
        if (purchaseTotal >= 100) {
            discount = 0.12 * purchaseTotal;   // 12% discount
        } else {
            discount = 0.10 * purchaseTotal;   // 10% discount
        }
    }

    discountedTotal = purchaseTotal - discount;
    tax = 0.05 * discountedTotal;  // 5% tax
    finalTotal = discountedTotal + tax;

    // Switch to print format based on teacher or not
    switch (isTeacher) {
        case 'y':
        case 'Y':
            cout << fixed << setprecision(2);
            cout << "\nTotal purchases      $" << setw(8) << purchaseTotal;
            if (purchaseTotal >= 100)
                cout << "\nTeacher's discount (12%)  " << setw(6) << discount;
            else
                cout << "\nTeacher's discount (10%)  " << setw(6) << discount;
            cout << "\nDiscounted total     " << setw(10) << discountedTotal;
            cout << "\nSales tax (5%)       " << setw(10) << tax;
            cout << "\nTotal                $" << setw(8) << finalTotal << endl;
            break;

        case 'n':
        case 'N':
            cout << fixed << setprecision(2);
            cout << "\nTotal purchases      $" << setw(8) << purchaseTotal;
            cout << "\nSales tax (5%)       " << setw(10) << tax;
            cout << "\nTotal                $" << setw(8) << finalTotal << endl;
            break;

        default:
            cout << "\nInvalid input! Please enter Y or N." << endl;
    }

    return 0;
}

