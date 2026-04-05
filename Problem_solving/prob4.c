//Find Second largest number in Array.

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[] = {9,9,9,0,9,9,9};
//     int largest = INT_MIN;
//     int second = INT_MIN;
//     for(int i = 0; i<7; i++){
//         if(arr[i]>largest){
//             second = largest;
//             largest = arr[i];
//         }else{
//             if(arr[i]>second && arr[i] != largest){
//                 second = arr[i];
//             }
//         }
//     }
//     if(second == INT_MIN){
//         printf("Second max number not availiable.");
//     }else{
//         printf("%d",second);
//     }

//     return 0;
// }

#include<stdio.h>
#include<limits.h>
 int main(){
    int arr[] = {-5,-9,-6,-4,-3,-7};
    int smallest = INT_MAX;
    int second = INT_MAX;
    for(int i = 0; i<6; i++){
        if(arr[i]<smallest){
            second = smallest;
            smallest = arr[i];
        }else{
            if(arr[i]<second && arr[i] != smallest){
                second = arr[i];
            }
        }
    } 
    if(second == INT_MAX){
        printf("Second min number not availiable.");
    }else{
        printf("%d",second);
    }

    return 0;
}