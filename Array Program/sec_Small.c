#include<stdio.h>
#include <limits.h>
int main(){
     int n[]={1,5,2,3,4,6};
    int min=n[0];
    int size=sizeof(n)/sizeof(n[0]);
    for(int i=0;i<size;i++)
    {
          if(n[i]<min)
        {
          min=n[i]; 
        }
    }
    // int temp_sec_small=INT_MAX;
    int temp_sec_small=6;
    for(int i=0;i<size;i++)
    {
        if(n[i]!=min && n[i]<temp_sec_small)
        {
            temp_sec_small=n[i];
        }
    }
    printf("%d",temp_sec_small);
    
return 0;
}