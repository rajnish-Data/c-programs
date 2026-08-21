#include<stdio.h>
int main(){
    long long int n;
    // in c language  a standard "int" has a maximum limit of 2147483647(10 digits).
    // so to reverse a number greater than 10 digits
    // we have to use long long int data type which has a maximum limit of 9223372036854775807(19 digits).
    printf("enter the number");
    scanf("%lld",&n);
    long long int r=0;
    while(n>0){
        r = r*10;
        r = r+ (n%10);
        n = n/10;
        
        
    }
    printf("the reverse of the number is %lld",r);
            return 0;
}
// if entering a number greater then 10 digit the number of integer overflow 
// and resulting in a garbage value and out putting 0.




// that is why we have getting garbage value in  previous program countdigit.c
// and  sumofdigitsnumber.c because we have
// used int data type which has a maximum limit of 2147483647(10 digits).