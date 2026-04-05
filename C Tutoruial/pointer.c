// #include <stdio.h>

// int main() {
//     int num;        
//     int *ptr =&num;       

//     printf("Enter a number: ");
//     scanf("%d", ptr);  

//     printf("You entered: %d\n", num);
//     printf("Value via pointer: %d\n", *ptr);

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int x = 5;
//     int *p = &x;
//     *p = *p + 2;
//     printf("%d %d", x, *p);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a = 10, b = 20;
//     int *p1 = &a, *p2 = &b;
//     *p1 = *p2;
//     printf("%d %d", a, b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int myNumbers[] = {25, 50, 75, 100};
// int i;

// for (i = 0; i < 4; i++) {
//   printf("%d\n", myNumbers[i]);
// }
// }

// Sum of Array Using Pointer

// #include<stdio.h>
// int main(){
//     int nums[]={85,58,856,69,84,31};
//     int sum = 0;
//     int *ptr= nums;
//     int length = sizeof(nums)/ sizeof(*ptr) ;
    
//     for(int i=0; i<length; i++){
//         sum+= *(ptr+i);
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int nums[]={85,58,856,69,84,31};
//     int sum = 0;
//     int *ptr= nums;
//     int *end = nums + sizeof(nums)/ sizeof(*ptr) ;
    
//     while(ptr<end){
//         sum += *ptr;
//         ptr++;
//     }
//     printf("%d\n",sum);
//     return 0;
// }


// Reverse an Array Using Pointer

// #include<stdio.h>
// int main(){
//     int nums[]={9,8,7,6,5,4};
//     int length=sizeof(nums)/sizeof(nums[0]);
//     for(int i=length-1;i>=0;i--){
//         printf("%d\n",nums[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int nums[]={9,8,7,6,5,4};
//     int length =sizeof(nums)/sizeof(nums[0]);
//     int *ptr= nums + (length - 1); 
    
//     while(ptr>=nums){
//         printf("%d\n",*ptr);
//         ptr--;
//     }
//     return 0;
// }





