#include<stdio.h>

int main(){
    int n[]={1,5,2,3,4,6};
    int max=n[0];
    int size=sizeof(n)/sizeof(n[0]);
    for(int i=0;i<size;i++)
    {
        if(n[i]<max)
        {
          max=n[i]; 
        }
    }
    printf("%d",max);
return 0;
}