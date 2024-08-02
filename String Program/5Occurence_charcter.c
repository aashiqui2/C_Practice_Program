#include <stdio.h>
#include <string.h>
#define MAX_CHAR 256 
int main() {
    char str[] = "hello world";  
    int count[MAX_CHAR] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    //debug
    // for(int i=0;i<256;i++)
    // {
    //     printf("%d %d\n",i,count[i]);
    // }
    for (int i = 0; i < MAX_CHAR; i++) {
        if (count[i] > 0) {
            printf("%9c | %10d\n", i, count[i]);
        }
    }
    return 0;
}
