#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=4; i<=3*n+1; i=i+3){
        printf ("%d ",i);
    }
    return 0;
}
// this code we use to maths like 3*n+1 is used to find the nth term .

//this code is used to print the AP series
// starting from 4 with a common difference of 3, up to the nth term.
 // The user is prompted to enter a number 'n', and the program 
 // calculates and prints the first 'n' terms of the series.