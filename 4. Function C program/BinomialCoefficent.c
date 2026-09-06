#include<stdio.h>

int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int r;
    printf("enter the number:");
    scanf("%d",&r);
    int nfact =1 ;
    int rfact =1 ; 
    int nrfact =1;
    for (int i=1; i<=n; i++){
        nfact = nfact*i;
    }
    for (int i=1; i<=r; i++){
        rfact = rfact*i;
    }
    for (int i=2; i<=n-r; i++){
        nrfact = nrfact*i;
    }
    int ncr = nfact / (rfact * nrfact);
    printf("binomial coefficient is: %d", ncr);
    return 0;
}

/*How It Works

1. Takes two inputs from the user: **n** and **r**.
2. Calculates the factorials:

   - n! (Factorial of n)
   - r! (Factorial of r)
   - (n - r)! (Factorial of the difference)
   
3. Applies the binomial formula to compute the final result.
4. Prints the calculated binomial coefficient.*/