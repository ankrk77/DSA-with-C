// Print first n odd numbers
#include<stdio.h>

void odd(int n){
    if(n>0){
        odd(n-1);
        printf("%d\n",n*2-1);
    }

}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    odd(n);
    return 0;
}
