#include<stdio.h>
void print(int n){
    if(n>0){
        print(n-1);
        printf("%d\n",n);
    }
}
int main(){
    int n;
    printf("Enter number(From till you want print)");
    scanf("%d",&n);
    print(n);
    return 0;
}
