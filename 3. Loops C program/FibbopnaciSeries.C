#include<stdio.h>
int main(){
    int n;
     printf("enter the number:");
     scanf ("%d",&n);
     int a=1, b=1;
     int sum=1;
     for(int i=1; i<=n-2; i++){

     //  i<=n-2; why this n-2 ?  because we already have first two numbers of series 1,1
     // and we need to find the next n-2 numbers of series.

        sum = a+b;
         a=b; 
         b = sum;

         // sum = a+b;   a=b;   b = sum;  this order are important because if we change 
         //the order then the value of sum will be wrong . 
         
     }
     printf ("the fibonacci series of %d is : %d",n,sum);
     return 0;
        
}