//                             //    TNRN(Take nothing Return nothing)
// #include<stdio.h>
// void add();
// int main(){
//     add();
//     return 0;
// }

// //int a,b,c; global variable- This variable can be also use outside of function, anyone can call. 
// void add(){    //No parentheses means TN (Take nothing).         void is Return type.
//     int a,b,c; //Local variable- this variable can be use only iner side of function,nobody can call.
//     printf("Enter numbers.");
//     scanf("%d %d", &a,&b);
//     c=a+b;
//     printf("Sum of number is %d",c);
//                //No return keyword means RN(Return nothing).
// }


                              //   TSRN (Take something Return Nothing)
// #include<stdio.h>
// void add(int,int);
// int main(){
//     int x,y;  // x and y is actual arguments.
//     printf("Enter two numbers:");
//     scanf("%d %d", &x,&y);
//     add(x,y);  //Call by value.
//     return 0;
// }
// void add(int a, int b){  // a and b is formal arguments.
//     int c;
//     c=a+b;
//     printf("Some is %d",c);
// }

                             //  TNRS(take nothing return something)

// #include<stdio.h>
// int add();
// int main(){
//     int s;  
//     s = add();  
//     printf("Sume is: %d",s);
//     return 0;
// }
// int add(){  
//     int a,b,c;
//     printf("Enter numbers.");
//     scanf("%d %d", &a,&b);
//     c=a+b;
//     return c;
// }

                              //  TNRS(take something return something)

// #include<stdio.h>
// int add(int,int);
// int main(){
//     int x,y,s; 
//     printf("Enter numbers.");
//     scanf("%d %d", &x,&y);
//     s = add(x,y);  
//     printf("Sume is: %d",s);
//     return 0;
// }
// int add(int a,int b){  
//     int c;
//     c=a+b;
//     return c;
// }