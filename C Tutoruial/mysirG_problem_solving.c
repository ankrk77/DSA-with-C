// Q1: Write a C program that prints your name and age on separate lines.

// #include<stdio.h>
// int main(){
//     printf("My name is: Ankit.\nAge is 22 year.");
//     return 0;
// }

// Q: Declare an integer, a float, and a character variable. Assign values and print them.

// #include<stdio.h>
// int main(){
//     int a =2;
//     char b = 'H';
//     float c =2.3;
//     printf("integer is %d\ncharector is %c\nfloat is %f",a,b,c);
//     return 0;
// }

// Q: Write a program that takes two numbers and prints their sum, difference, product, and whether the first is greater than the second.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter first number:");
//     scanf("%d",&a);
//     printf("Enter second number:");
//     scanf("%d",&b);
//     printf("The sum the numbers:%d\n",a+b);
//     printf("The difference of the numbers:%d\n",a-b);
//     printf("The product of the numbers:%d\n",a*b);
//     if(a>b){
//         printf("A is greater than B.");
//     }
//     return 0;
// }

// Q: Write a program that checks if a number is positive, negative, or zero using if...else.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number:");
//     scanf("%d",&a);
//     if(a<0){
//         printf("Your number is Negative.");
//     }else if(a>0){
//         printf("Your number is Positive.");
//     }else{
//         printf("Your number is Zero.");
//     }
//     return 0;
// }

// Q: Print all even numbers from 1 to 20 using a for loop. Use continue to skip odd numbers.

// #include<stdio.h>
// int main(){
//     for(int i=1; i<=20;i++){
//         if(i%2 != 0){
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }

// Q: Write a program to input 5 numbers into an array and print their average.

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *nums,sum=0;
//     float avg;
//     nums=(int*)malloc(5*sizeof(int));
//     for(int i=0; i<5; i++){
//         printf("Enter your number:");
//         scanf("%d",&nums[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",nums[i]);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         sum+=nums[i];
//     }
//     avg=(float)sum/5;
//     printf("Avarage is %.2f",avg);

//     free(nums);
//     return 0;
// }
