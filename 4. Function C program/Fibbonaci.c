#include<stdio.h>

void fibbonaci(int n){
    int t1=0 ,t2 =1, nextterm;
    
    for(int i=1; i<=n; i++){
        printf("%d", t1);
        nextterm = t1 + t2; // claculate the next term b adding previous two terms
        t1 = t2;           // update the value of t1 to next term
        t2 = nextterm;    // update the value of t2 to the newly caLculated  term
    }
}
int main(){
    int n;
    printf("enter the number:");
    scanf ("%d",&n);

    fibbonaci(n);
    printf("\n");
    return 0;
}

/* How It Works (Step-by-Step Logic):
    1. Input Range: Takes the total count of terms 'n' from the user.
    2. Function Call: Calls the 'printFibonacci()' function by passing 'n' as an argument.
    3. Sequence Generation: Uses a loop inside the function 
         to add the previous two numbers and generate the series.
    4. Output Display: Prints each Fibonacci number sequentially on the screen.
    */