#include <stdio.h>

int main() {
    char word[100];
    int len = 0, vowels = 0, consonants = 0, is_palindrome = 1;

    printf("Enter a word: ");
    scanf("%99s", word);

    printf("Original word: %s\n", word);

    while (word[len] != '\0') {
        len++;
    }
    printf("Length: %d\n", len);

    for (int i = 0; i < len; i++) {
        char ch = word[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Reversed word: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");

    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("Palindrome Status: YES\n");
    else
        printf("Palindrome Status: NO\n");

    printf("Vowels: %d | Consonants: %d\n", vowels, consonants);

    return 0;
}