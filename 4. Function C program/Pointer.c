# include<stdio.h>
int main(){
    int a = 25 ;
    int* x = &a;
    int** y = &x;
    printf("%d\n",*x); // %p sa adress print hota hai
    printf("%d\n",**y); 

    printf("%p\n", &x);
    printf("%p\n",&y);
    return 0;
}

// int* -> int address store
// int** -> int* address store

/* How It Works
    1. Declares a normal integer variable 'a' with value 25.
    2. Uses a single pointer 'x' to store the memory address of 'a' 
    and accesses its value using *x =25.

    3. Uses a double pointer 'y' to store the address of pointer 'x' 
    and accesses the value using **y = 25..
    
    4. Uses the %p format specifier to print the actual memory addresses in hexadecimal format.
    */