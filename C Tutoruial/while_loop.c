// #include <stdio.h>
// int main(){
//     int sum = 0;
//     int digit;
//     int num;
//     printf("Enter your number:");
//     scanf("%d",&num);
//     while(num>0){
//         digit=num%10;
//         sum += digit;
//         num = num/10;
//     }
//     printf("Sum is:%d\n",sum);
//     return 0;
// }

// Write a C program to print numbers from 1 to 10 using a while loop.


/*#include <stdio.h>
int main(){
    int i=1;
    int num;
    while(i <= 10){
        printf("%d\n",i);
        i++;
    }
    
    return 0;
}*/

// Write a program to print the Fibonacci series up to n terms using a while loop.


// #include <stdio.h>
// int main(){
//     int i=0,n,num =0;
//     printf("Enter term num:");
//     scanf("%d\n",&n);
    
//     while(i<=n){
//         num+=i;
//         printf("%d",num);
//     }
//     return 0;
// }

// Write a program to calculate the sum of first n natural numbers using a while loop.

// #include <stdio.h>
// int main (){
//     int n,sum=0,i=0;
//     printf("Enter n:\n");
//     scanf("%d",&n);
//     while (i<=n)
//     {
//         sum+=i;
//         i++;
//     }
//     printf("Sum is:%d\n",sum);
//     return 0;
    
// }


// Write a program to print all even numbers between 1 and 50 using a while loop



/*#include <stdio.h>
int main(){
    int i=0;
    while (i<=50)
    {
        printf("%d\n",i);
        i+=2;
    }
    
    return 0;
}*/


//Write a program number entered by the user to 0 using a while loop.

// #include <stdio.h>
// int main(){
//     int n,i=0;
//     printf("Enter range:");
//     scanf("%d",&n);
//     while (n>=0)
//     {
//         printf("%d\n",n);
//         n--;
//     }
    
//     return 0;
// }


// Write a program to reverse a number entered by the user using a while loop.

// #include <stdio.h>
// int main(){
//     int new=0,n,digit;
//     printf("Enter digit:");
//     scanf("%d",&n);
//     while (n>0)
//     {
//         digit=n%10;
//         new=new*10+digit;
//         n/=10;
//     }
//     printf("%d\n",new);
//     return 0;
// }

//Write a program to check if a number is a palindrome using a while loop.


// #include <stdio.h>

// int main() {
//     int n, original, rev = 0, digit;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     original = n; 

//     while (n > 0) {
//         digit = n % 10;         
//         rev = rev * 10 + digit; 
//         n = n / 10;             
//     }

//     if (rev == original)
//         printf("%d is a palindrome.\n", original);
//     else
//         printf("%d is not a palindrome.\n", original);

//     return 0;
// }

//Write a C program to print numbers from 1 to 10 using a while loop.

// #include <stdio.h>
// int main(){
//     int n=10,i=1;
//     while (i<=n)
//     {

//         printf("%d\n",i);
//         i++;
//     }
//     return 0;
// }

//Write a program to calculate the sum of first n natural numbers using a while loop.

// #include<stdio.h>
// int main(){
//     int n,sum=0,i=0;
//     printf("Enter range:");
//     scanf("%d",&n);
//     while (i<=n)
//     {
//         sum+=i;
//         i++;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

//Write a program to print all even numbers between 1 and 50 using a while loop.

// #include<stdio.h>
// int main(){
//     int n=50;
//     while (n>=0)
//     {
//         printf("%d\n",n);
//         n-=2;
//     }
//     return 0;
// }

//Write a program to reverse a number entered by the user using a while loop.

// #include<stdio.h>
// int main(){
//     int n,new=0,digit;
//     printf("Enter your number:");
//     scanf("%d",&n);
//     while (n>0)
//     {
//         digit=n%10;
//         new=new*10+digit;
//         n/=10;
//     }
//     printf("%d\n",new);
//     return 0;
// }

//Write a program to check if a number is a palindrome using a while loop.


// #include<stdio.h>

// int main(){
//     int reverse=0,num,digit,original;
    
//     printf("Enter number:");
//     scanf("%d",&num);
//     original = num;

//     while(num != 0 )
//     {
//         digit=num%10;
//         reverse=reverse*10+digit;
//         num/=10;
//     }

//     if(original == reverse){
//         printf("Number is palindrome.");
//     }else{
//         printf("Number is not palindrome.");
//     }
//     return 0;
// }

