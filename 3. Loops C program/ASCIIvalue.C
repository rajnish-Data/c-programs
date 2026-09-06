#include<stdio.h>
int main(){
    for(int i=65; i<=108; i++){
        char ch = (char)i;
        printf("%c -> ",ch);
        printf("%d\n", i);
    }
    // print ascii value like a=65 , b=66  --------- z=90 
    return 0;
}