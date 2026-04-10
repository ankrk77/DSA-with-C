#include<stdio.h>

int thirdMax(int nums[],int n){
    int ans =0;
    for(int i =n-1;i>n-3;i--){
        int max_idx = i;
        for(int j=i-1;j>0;j--){
            if(nums[max_idx]<nums[j]){
                max_idx=j;
                ans=max_idx;
            }
        }
        int temp = nums[max_idx];
        nums[max_idx] = nums[i];
        nums[i] = temp;
    }
    

}


int main(){
    int nums[]={2,2,3,1};
    int n = sizeof(nums)/sizeof(nums[0]);

    int result = thirdMax(nums,n);

    printf(" The max third is : %d\n",result);

}