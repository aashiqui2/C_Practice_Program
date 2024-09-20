//!  C program to find maximum occurring character in a string
#include<stdio.h>
int main(){
    char c[]="I love Codeforwin";
    int freq[256]={0};

    for(int i=0;c[i]!='\0';i++)
    {
        freq[(unsigned char)c[i]]+=1;
    }
    int max=0;
    char find='\0';
    for(int i=0;i<256;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            find=i;
        }
    }
     printf("Maximum occurring character is '%c' = %d times.",find,max);
return 0;
}