#include <iostream>
using namespace std;

int main() {
    double purchase, discountRate, finalPrice;

    cout << "Enter purchase amount (Rs): ";
    cin >> purchase;

    // Nested conditional operators for discount logic
    discountRate = (purchase < 100) ? 0 :
                   (purchase <= 500) ? 0.10 :
                   (purchase <= 1000) ? 0.15 : 0.20;

    finalPrice = purchase - (purchase * discountRate);

    cout << "Purchase Amount: Rs " << purchase << endl;
    cout << "Discount Applied: " << (discountRate * 100) << "%" << endl;
    cout << "Total Price After Discount: Rs " << finalPrice << endl;

    return 0;
}

