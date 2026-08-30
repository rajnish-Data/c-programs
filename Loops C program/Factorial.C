#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf ("%d",&n);
    int product =1;
    for(int i=1;i<=n;i++){
        product = product*i;
        printf("the factorial of %d is : %d\n", i, product);
        // inside the loop: printf execute on every iteration and prints 
        //the value of product after each multiplication from 1 to n.
        
    }
    // printf outside the loop prints only the final value of
    // product after the loop ends
    return 0;
}