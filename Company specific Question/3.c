/*  
findind commas
Liam works as a data analyst for a company that stores massive amounts of numerical data. He has been tasked with determining how many commas are used when writing numbers in the range of 1 to N (inclusive) in a specific format.

In this format, if numbers are more than four digits long, commas are used to separate the numbers into groups of three, starting from the right for the representation of the number. Your task is to help Liam find and return an integer value representing the total number of commas used when writing all the integers in the range of 1 to N

Input Specification:

input1: An integer value N, representing the number range.

Output Specification:

Return an integer value representing total number of commas used when writing all the integers in the range of 1 to N.

Example 1:

input1: 1010

Output: 11
*/

#include<stdio.h>
#include<string.h>
int countCommas(int n){
    int commaCount=0;
    for(int i=1;i<=n;i++)
    {
        char numStr[12];//for largest 32-bit integer
        sprintf(numStr,"%d",i);
        int len=strlen(numStr);

        if(len>3)
        {
            commaCount=commaCount+(len-1)/3;
        }
    }
    return commaCount;
}
int main(){
    int n=1010;
    printf("%d",countCommas(n));
return 0;
}