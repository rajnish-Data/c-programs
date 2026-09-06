#include<stdio.h>
int factorial(int x){
    int fact =1;
    for(int i=2; i<=x; i++){
        fact = fact * i;

    }
    return fact;

}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        int result = factorial(i);
        printf("the factorial of %d is : %d\n",i,result);
    }
    return 0;
}

/* How It Works (Step-by-Step Logic):
    1. Input Range: Takes the upper limit 'n' from the user to decide how many factorials to print.

    2. Sequential Loop: Runs a for-loop from 1 up to 'n' to process each number one by one.

    3. Function Call: Calls the 'factorial()' function for each number in the loop to compute its product.
    
    4. Output Display: Prints the final calculated factorial result clearly on the screen for every number.
    */