#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (isalpha(c)) {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}

