#include<stdio.h>
int main(){
     int a[] = { 1, 2, 3, 4, 5 };
                //  0  1  2  3  4
        int k = 1;
        int len=sizeof(a)/sizeof(a[0]);
        for (int i = 1; i <= k; i++) {
            int last = a[len-1];
            for (int j = len-1; j >0; j--) {
                a[j] = a[j -1];
            }
            a[0] = last;
        }
        for (int i = 0; i < len; i++) {
            printf("%d ",a[i]);
        }
return 0;
}