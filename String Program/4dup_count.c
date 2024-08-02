#include <stdio.h>
#include <ctype.h>

int main() {
    char input[] = "t4d2";  
    char output[100]; 
    int i = 0, j = 0;

    while (input[i] != '\0') {
        if (isalpha(input[i])) {
            char ch = input[i];
            i++;
            int count = 0;
            while (isdigit(input[i])) {
                count = count * 10 + (input[i] - '0');//char to int
                i++;
            }
            for (int k = 0; k < count; k++) {
                output[j++] = ch;
            }
        }
    }
    output[j] = '\0';

    printf("Output: %s\n", output);

    return 0;
}
