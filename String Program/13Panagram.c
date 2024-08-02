#include <stdio.h>
#include <stdbool.h>
// #include <string.h>
#include <ctype.h>

int main() {
    char s[100] = "The quick brown fox jumps over the lazy dog";


    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }


    int count[26] = {0};


    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count[s[i] - 'a']++;
        }
    }

    bool ispangram = true;


    for (int i = 0; i < 26; i++) {
        if (count[i] == 0) {
            ispangram = false;
            break;
        }
    }

    if (ispangram) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

    return 0;
}
