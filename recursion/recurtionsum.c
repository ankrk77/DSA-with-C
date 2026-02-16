#include<stdio.h>

int sum(int n){
    if(n == 1)
    return 1;
    int ans = n+sum(n-1);
    return ans;

}

int main(){
    int n;
    printf("Enter no.\n");
    scanf("%d",&n);
    int sum();
    int ans= sum(n);
    printf("Result is : %d",ans);
    return 0;
}