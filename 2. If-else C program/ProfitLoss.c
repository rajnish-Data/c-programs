#include<stdio.h>
int main(){
    int cp;
    printf("enter the cost price:");
    scanf("%d",&cp);
    int sp;
    printf("enter the selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        printf ("profit=%d",sp-cp);
    }
    else if(sp==cp){
        printf("no profit no loss");
    }
    else{
        printf("loss=%d",cp-sp);
    }
}