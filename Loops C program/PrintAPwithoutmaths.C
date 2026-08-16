#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int a = 4;
    for (int i=4; i<=n; i++){
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}


// this code without use math print ap series from nth term.