#include<stdio.h>
int main(){
    int n; 
    printf("enter the numbertL:");
    scanf ("%d",&n);
   // 1-2+3-4+5-6+....n terms
   // odd terms are positive and even terms are negative

    int sum=0;
    for(int i=1;i<=n; i++){
        if(i%2==0) sum = sum - i;
        else sum = sum + i;

    }
    printf("the sum of series is %d",sum);
    return 0;
}