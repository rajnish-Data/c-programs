#include<stdio.h>
int main(){
    int a , b;
    printf("enter the number\n:");
    scanf("%d %d",&a,&b);
    
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("the valu of a is %d \n",a);
    printf("the value of b is %d \n",b);
    return 0;
}