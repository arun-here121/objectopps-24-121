#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;
    for (char c : str) {
        char lower = tolower(c);
        if (isalpha(lower)) {
            if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}

