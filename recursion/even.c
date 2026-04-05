// Print first n even numbers
#include<stdio.h>

void even(int n){
    if(n>0){
        even(n-1);
        printf("%d\n",n*2);
    }

}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    even(n);
    return 0;
}