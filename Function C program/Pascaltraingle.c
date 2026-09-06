#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact = fact *i;
    }
    return fact;
}
 int combination(int n, int r){
    int ncr = factorial (n)/(factorial(r)*factorial(n-r));
    return ncr;
 }
  int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
     
    for (int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            int icj = combination(i,j);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
  }
 
  /* How It Works
    1. Takes the number of rows (n) from the user.
    2. Uses a factorial function to compute factorials.
    
    3. Uses a combination function to calculate nCr values.
    4. Uses nested loops to print Pascal's Triangle row by row.
    */