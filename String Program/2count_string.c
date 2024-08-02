//count the upper case,lowercase and digit and special symbol
#include<stdio.h>
int main(){
    char s[100];
    int c1=0,c2=0,c3=0,c4=0;
    printf("enter the string: ");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 &&s[i]<=90)
        {
            c1++;
        }
        else if(s[i]>=97 &&s[i]<=122)
        {
            c2++;
        }
        else if(s[i]>=48 &&s[i]<=57) 
        {
            c3++;
        }
        else{
            c4++;
        }
    }
    printf("%d uppercase count\n",c1);
    printf("%d lowercase count\n",c2);
    printf("%d digit count \n",c3);
    printf("%d special symbol count\n",c4);
return 0;
}