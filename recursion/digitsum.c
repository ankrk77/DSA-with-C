#include <stdio.h>

int digitSum(int n){
    
    if(n==0) return 0;
    int rem = n%10;
    int ans = rem +digitSum(n/10); 
    return ans;
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int ans = digitSum(n);
    printf("Sum of digits = %d", ans);
    return 0;
}
