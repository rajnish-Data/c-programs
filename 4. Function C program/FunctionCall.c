#include<stdio.h>
void england(){
    printf("you are in england\n"); // 6
    return;  // 7
}
void australia(){
    printf("you are in australia\n");  // 4
    england(); // call to england function // 5
    return;  // 8
}
void india(){
    printf("you are in india\n"); // 2
    australia(); // call to australia function // 3
    return;  // 9
}
int main(){
    india(); // call to india function // 1
    return 0;

}

//The program starts execution from the `main()` function and sequentially calls functions representing 
//different countries (`india`, `australia`, and `england`), showing how function control transfers from one to another.

//🔄 Execution Flow (Step-by-Step)

// 1. **`main()`** starts the program execution and calls `india();` (Numbered 1 & 2 in code).
// 2. **`india()`** executes, prints `"you are in india"`, and calls `australia();` (Numbered 3, 4 & 5).

// 3. **`australia()`** executes, prints `"you are in australia"`, and calls `england();` (Numbered 6, 7 & 8).
// 4. **`england()`** executes and prints `"you are in england"` (Numbered 9).
