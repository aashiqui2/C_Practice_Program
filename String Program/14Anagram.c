#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

int main() {
    char str1[MAX_LEN], str2[MAX_LEN];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove the newline characters if they exist
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Lengths of both strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, they cannot be anagrams
    if (len1 != len2) {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    // Arrays to count occurrences of each character
    int count1[256] = {0};
    int count2[256] = {0};

    // Count occurrences of each character in str1
    for (int i = 0; i < 256; i++) {
        count1[tolower(str1[i])]++;
    }

    // Count occurrences of each character in str2
    for (int i = 0; i < 256; i++) {
        count2[tolower(str2[i])]++;
    }

    // Compare character counts
    bool areAnagrams = true;
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            areAnagrams = false;
            break;
        }
    }

    if (areAnagrams) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
