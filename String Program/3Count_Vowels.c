#include<stdio.h>
#include<string.h>
int main(){
    char c[]="education";
    int count=0;
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
        {
            count++;
        }
    }
    printf("%d",count);
return 0;
}