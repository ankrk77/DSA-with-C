// #include<stdio.h>
// int main(){
//     int nums[]={5,9,3,7,6,4};
//     int max = nums[0];
//     int min = nums[0];
//     int i;
//     for(i=0;i<6;i++){
//         if (max>nums[i]){
//             continue;
//         }else{
//             max=nums[i];
//         }
//     }
//     printf("Max num is:%d\n",max);

//     for(i=0;i<6;i++){
//         if (min<nums[i]){
//             continue;
//         }else{
//             min=nums[i];
//         }
//     }
//     printf("Min num is:%d",min);
//     return 0;
// }

#include<stdio.h>
int main(){
    int nums[]={5,9,3,7,6,4};
    int max = nums[0];
    int min = nums[0];
    int i;
    for(i=0;i<6;i++){
        if (max<nums[i]){
            max=nums[i];
        }
        if (min>nums[i]){
            min=nums[i];
        }
    }
    printf("Max num is:%d\n",max);
    printf("Min num is:%d",min);
    return 0;
}