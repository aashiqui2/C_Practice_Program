#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int c1 = 0, c2 = 0;

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
            c1++;
        }
        if (s[i] == 32) {
            c2++;
        }
    }

    printf("%d character count\n", c1);
    printf("%d words count\n", c2 + 1);

    return 0;
}
