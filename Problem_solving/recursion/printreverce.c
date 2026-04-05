// Print numbers from n to 1

#include<stdio.h>

void printreverce(int n){
    if(n>0){
        printreverce(n-1);
        printf("%d\n",n);
    }
}

int main(){
    int n;
    printf("Enter your number(from you want print): ");
    scanf("%d",&n);
    printreverce(n);
    return 0;
}