#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool isPalindrome = true;
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) cout << "Palindrome String" << endl;
    else cout << "Not a Palindrome" << endl;

    return 0;
}

