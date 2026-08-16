#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=2;i<=n; i++){
        if(n%i==0){
            printf("the number is composite");
            break;
        }
        else{
            printf("the number is prime");
            break;

        }
    }
    return 0;
}