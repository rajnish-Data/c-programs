#include<stdio.h>
 int sumofdigit(int num){
    int digitsum =0;
      
     while(num > 0){
        int lastdigit = num % 10;
        num /= 10;
        digitsum += lastdigit;
     }
     return digitsum;
 } 

  int main(){
    printf("sumofdigit: %d" , sumofdigit(456783));
    return 0;
  }