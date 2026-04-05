// C Language का सफर — कहानी

// 1️⃣ 1964 — Multics Project की शुरुआत
// 1964 में MIT, Bell Labs, और General Electric ने एक बड़ा प्रोजेक्ट शुरू किया — जिसका नाम था Multics (Multiplexed Information and Computing Service)।
// उद्देश्य था — एक ऐसा Operating System बनाना जिस पर कई उपयोगकर्ता एक साथ काम कर सकें।
// उस समय ऐसा कोई system मौजूद नहीं था।
// Multics को बनाने के लिए Assembly Language और PL/I का उपयोग किया जा रहा था।
// लेकिन समस्या यह थी कि PL/I बहुत भारी थी और उसके compilers reliable नहीं थे।
// इस वजह से Multics बहुत धीमा, महंगा और कठिन बन गया।

// 2️⃣ Ken Thompson और UNIX का जन्म
// Bell Labs के scientist Ken Thompson ने देखा कि Multics project practical नहीं है।
// उन्होंने Multics को छोड़ दिया और एक नया operating system बनाना शुरू किया — UNIX।
// UNIX को बनाते समय Ken Thompson ने सोचा कि एक छोटी, सरल और portable programming language की जरूरत है।

// 3️⃣ 1966 — BCPL का जन्म
// Cambridge University के scientist Martin Richards ने बनाई — BCPL (Basic Combined Programming Language)।
// BCPL की खासियत:
// - Portable (किसी भी hardware पर चल सकती थी)
// - Simple syntax
// - System programming के लिए उपयुक्त
// लेकिन BCPL में limitation थी — इसमें सिर्फ single data type (word) था।

// 4️⃣ 1969 — B Language की खोज
// Ken Thompson ने BCPL को देखकर महसूस किया कि इसे और बेहतर बनाया जा सकता है।
// उन्होंने BCPL को simplify किया और 1969 में B language बनाई।
// B language UNIX के पहले versions में इस्तेमाल हुई और यह छोटा और compact था।
// लेकिन इसमें भी limitations थीं — जैसे data types का अभाव और complex operations में कमजोरी।

// 5️⃣ 1972 — C Language का जन्म
// जब UNIX को नए hardware (PDP-11) पर port करना पड़ा, तो B language की limitations सामने आईं।
// Dennis Ritchie ने B language को improve किया और 1972 में बनाई — C language।




//C Language - C is a general-purpose, procedural programming language developed in the 1972 by Dennis Ritchie at Bell Labs.
//              It was designed to develop system software like operating systems, and it is the core language used to write the UNIX operating system.
//              It is widely used for system programming, embedded systems, and applications requiring high performance.

// Variable - Variable is the name of a mamory location which stores data.
// Declaring(Creating) variable - 
//             syntex -  type variableName = Value;
//             ex-       int myNum = 15;
// Format specifier - Format specifiers are used together with the printf() function to tell the compiler what type of data the  vriable is storing.
//                    Format specifiers starts with a percentage sign % and surrounded by " ".

//                    1.char - %c
//                    2.int - %d or %i
//                    3.float - %f
                   
//             ex -    int myNum = 15;
//                     float myFloat = 5.99;
//                     char myChar = 'D';
//                     printf("%i\n", myNum);
//                     printf("%f\n", myFloat);
//                     printf("%c", myChar);


//                 combine both text and variable - 
//                     int myNum = 55;
//                     printf("My faverate number is : %d", myNum);

// Change variable value - 
//                 (1)
//                     int myNum = 55;
//                     myNum = 27;

//                 (2)
//                     int myNum = 55;
//                     int myOtherNum = 27;
//                     myNum = myOtherNum;
//                     printf("%d",mynum);

//                 (3)
//                     int myNum = 55;
//                     int myOthernum;
//                     myOtherNum = myNum;
//                     printf("%d", myOtherNum);

//                 To declear more than one variable of the same type, use a comma - separated list.
//                     int x=5,y=3,z=9;
//                     printf("%d %d %d", x,y,z);

//                 Same value to multuiple variable of the same type.
//                     int x,y,z;
//                     x=y=z=55;
//                     printf("%d",x);

// Reale life example -
//                 A programm that stores defferent data about a collage student.
//                    int studentID = 15;
//                    int studentAge = 23;
//                    float studentFee = 75.25;
//                    char studentGrade = 'B';
//                    printf("%d\n",studentID);
//                    printf("%d\n", studentAge);
//                    printf("%f\n", studentFee);
//                    printf("%c", studentGrade);

//                 Calculate the area of a rectangle.
//                    int lenght = 5;
//                    int width = 7;
//                    printf("Area of rectangle %i", lenght * width );

// Data type -

//                 int   - store integer value - 2 bit or 4 bit
//                 float  - store float point (decimal value )  - 4 bit
//                 char   - store single charecter     - 1 bit 
//                 double  - store (decimal big value)  - 8 bit

             
//             1. char is used to store a single charecter. if try to store more than a single charecter, it will only print then lost charecter.
//             2. the precision of float is six or seven decimal digit.
//             3. the precision of double is about 15 decimal digit.
//             4. time 10 to the power of - 
//                for its use the letter e or E.
//                ex- 
//                1. 35e3 means 35*10^3 = 35000
//                2. 38e5 means 38*10^5 = 3800000

//             if you print a floating point number, the output will show many digit after the decimal point.
//             ex-
//                float myFloatNumber = 3.5;
//                printf("%f", myFloatNum); output will be 3.5000000
//             for removing extra zeroes use dot (.)
//             ex-
//                float myNum = 3.5;
//                printf("%f/n", myNum); output 3.500000
//                printf("%.1f/n", myNum); output 3.5
//                printf("%.2f/n", myNum); output 3.50
//                printf("%.3f/n", myNum); output 3.500

// Memory size - use sizeof operator.
               
//                int myInt;
//                float myFloat;
//                char myChar;
//                double myDouble;
//                printf("%zu\n", sizeof(myInt));
//                printf("%zu\n", sizeof(myFloat));

// Type conversion - One data type --> Other data type
//             1.Implict conversion (Automatically)
//             2.Explict conversion (Manually)

//             Implict conversion - its done automatically by the compiler.
            
//             Explict conversion - place the type in parentheses ()in front of the value.
//             ex - 
//                int num1 = 5;
//                int num2 = 2;
//                float sum = (float) num1/num2;
//                printf("%f",sum);  output 2.50000

// Constants - Value that don't change (fixed).
//            ex - const int minutesPerHour = 60;
//            When you declare a constant variable, it must be assigned with a value.
//            ex - const int minutesPerHour;
//                 minutesPerHour = 60; // error

// Keywords - Reserve words that have special meaning to the compiler.
//            32 Keywords in C.
// auto       double     int        struct
// break      else       long       switch
// case       enum       register   typedef
// char       extern     return     union
// const      float      short      unsigned
// continue   for        signed     void
// default    goto       sizeof     volatile
// do         if         static     while

// Programm Structure - 
                  
//                    #include<stdio.h> 
//                      int main(){
//                          printf("Hallo world")
//                          return 0;
//                    }

// Comments -    Line that are not part of programming.
//               1. Single line - //
//               2. Multiple line - /*  */

// Output - 
//               1. To output value or print text use - printf()
//               2. For work with text wrapped inside " ".
//               3. For print many line mean insert a new line, use \n character.
//               4. two \n\n character will create a blank line.
//               5. \n is called escape sequence.

// Input -         1. Always use & with variables in scanf() (except strings).
//                 2. scanf("%s", str); reads only till the first space.
//                 3. Use fgets() to read full lines or sentences.
//                 4. Avoid gets() - it causes buffer overflow (unsafe).

//                  #include <stdio.h>
//                  int main() {
//                         int age;
//                         char name[50];
                            
//                         printf("Enter your age: ");
//                         scanf("%d", &age);
                                
//                         getchar(); // Clear newline
                                
//                         printf("Enter your name: ");
//                         fgets(name, 50, stdin);
                                    
//                         printf("Hello %sYou are %d years old.\n", name, age);
//                             return 0;
//                             }



// C operator - 
//                  1. Arithmetic Operator
//                  2. Comperison Operator
//                  3. Logical Operator
//                  4. Assignment Operator
//                  5. Unary Operator
//                  6. Bitwise Operator
//                  7. Conditional Operator
//                  8. Comma Operator
//                  9. sizeof Operator

//             Arithmetic Operator -   
//                                     + Addition
//                 ex-
//                 int a = 10, b = 5;
//                 int sum = a + b;  // sum = 15

//                                     - Subtraction
//                 ex-
//                 int a = 10, b = 5;
//                 int diff = a - b;  // diff = 5
                                   
//                                     * multiplication
//                 ex-
//                 int a = 10, b = 5;
//                 int product = a * b;  // product = 50

//                                     / division
//                 ex-
//                 int a = 10, b = 5;
//                 int result = a / b;  // result = 2

//                                     % Modulus
//                 ex-
//                 int a = 10, b = 3;
//                 int remainder = a % b;  // remainder = 1

//             Comperison Operator - 
//                                     == Equal to
//                 ex-
//                 int a = 5, b = 5;
//                 if (a == b) {
//                     printf("Equal");  // prints Equal
//                     }

//                                     != Not Equal
//                 ex-
//                 int a = 5, b = 3;
//                 if (a != b) {
//                     printf("Not Equal");  // prints Not Equal
//                     }

//                                     > Greater than
//                 ex-
//                 int a = 10, b = 5;
//                 if (a > b) {
//                     printf("a is greater");  // prints a is greater
//                     }

//                                     < Less than
//                 ex-
//                 int a = 2, b = 5;
//                 if (a < b) {
//                     printf("a is smaller");  // prints a is smaller
//                     }

//                                         >= Greater than or Equal
//                 ex-
//                 int a = 5, b = 5;
//                 if (a >= b) {
//                     printf("a is greater or equal");  // prints a is greater or equal
//                     }

//                                         <= Less than or Equal
//                 ex-
//                 int a = 3, b = 5;
//                 if (a <= b) {
//                     printf("a is smaller or equal");  // prints a is smaller or equal
//                     }

//             Logical Operator -
//                                         && Logical AND
//                 ex- 
//                 int a = 5, b = 10;
//                 if (a < 10 && b > 5) {
//                         printf("Both conditions true");  // prints
//                         }

//                                         || Logical OR 
//                 ex- 
//                 int a = 5, b = 3;
//                 if (a > 2 || b > 5) {
//                         printf("At least one is true");  // prints
//                         }

//                                         ! Logical NOT
//                 ex-
//                 int a = 5;
//                 if (!(a == 10)) {
//                         printf("a is not 10");  // prints
//                         }

//             Assignment Operators - 
//                                         = Simple assignment
//                 ex- 
//                 int a;
//                 a = 10;  // a becomes 10

//                                         += Add and assign
//                 ex- 
//                 int a = 5;
//                 a += 3;  // a = a + 3 → a = 8

//                                         -= Subtract and assign
//                 ex-
//                 int a = 5;
//                 a -= 2;  // a = a - 2 → a = 3

//                                         *= Multiply and assign
//                 ex- 
//                 int a = 5;
//                 a *= 2;  // a = a * 2 → a = 10

//                                         /= Divide and assign
//                 ex- 
//                 int a = 10;
//                 a /= 2;  // a = a / 2 → a = 5

//                                         %= Modulus and assign
//                 ex- 
//                 int a = 10;
//                 a %= 3;  // a = a % 3 → a = 1

//             Unary Operator - 
//                                         ++ Increment
//             ex-
//             int a = 5;
//             a++;  // a becomes 6

//                                         -- Decrement
//             ex-
//             int a = 5;
//             a--;  // a becomes 4

