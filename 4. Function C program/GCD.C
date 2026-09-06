#include<stdio.h>
 int gcd(int a, int b){
    while(b!= 0){
        int temp =b;
        b =a % b;
        a = temp; 
    }
    return a;

 }
   int main(){
    int num1 ,num2;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);

    int result = gcd(num1 , num2);
    printf(" the gcd of %d and %d is: %d\n",num1,num2,result);
    return 0;
   }

   /* How It Works
    1. Takes two numbers from the user as inputs.
    2. Uses a function with the Euclidean algorithm (using remainder) to compute the GCD.
    3. Loops until the remainder becomes zero.
    4. Prints the final calculated GCD result.
    */