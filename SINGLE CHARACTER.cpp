#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        // Lowercase vowels
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << ch << " is a lowercase vowel." << endl;
            break;

        // Uppercase vowels
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << ch << " is an uppercase vowel." << endl;
            break;

        // Digits
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << ch << " is a digit." << endl;
            break;

        // Everything else (need default to handle consonants & special chars)
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                cout << ch << " is a consonant." << endl;
            else
                cout << ch << " is a special character." << endl;
    }

    return 0;
}

