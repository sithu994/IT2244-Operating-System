1.c
/if else condition
f(condition){
   //statement;
 else {
   //statement
}
/Enter your age and verify whether you are eligible or not for election voting using if else
include <stdio.h>
nt main(){
   int age;
   printf("Enter your age: ");
   scanf("%i", &age);
   if( age >= 18){
       printf("\nYou are eligible for voting\n");
   } else if( age < 0) {
       printf("\nInvalid age\n");
   } else {
       printf("\nYou are not eligible for voting\n");
   }
   return 0;
}
------------------------
2.c
/Ternary Operator
/condition? expression1 : express2;
include <stdio.h>
nt main(){
   int age;
   printf("Enter your age: ");
   scanf("%i", &age);
   (age > = 18)? printf("You can vote") : printf("You cannot vote");
   return 0;
}
------------------------
3.c
/switch case
/input: Enter the number between 1 to 7: 1
/output: Today is sunday!
include <stdio.h>
nt main(){
   int number;
   printf("Enter the number between 1 to 7: ");
   scanf("%i", &number);
   switch(number){
       case 1:
       printf("\nToday is Sunday!\n");
       break;
       case 2:
       printf("\nToday is Monday!\n");
       break;
       case 3:
       printf("\nToday is Tuesday!\n");
       break;
       case 4:
       printf("\nToday is Wednesday!\n");
       break;
       case 5:
       printf("\nToday is Thursday!\n");
       break;
       case 6:
       printf("\nToday is Friday!\n");
       break;
       case 7:
       printf("\nToday is Saturday!\n");
       break;
       default:
       printf("\nInvalid Number.Choose from (1-7)\n");
   }
   return 0;
}
------------------------
4.c
*Write a code for small astrology based on your life path number for that get date of birth from user then calcul
xample
alculation for life path number:
    a = date % 10
    b = date / 10
    c = a + b
    if life path number
        1:Lucky
        2:Carefully do your work
        3.Storger
        4.Happy 
        5.Can get help
        6.Doubt
        7.Sad
        8.Like
        9.Courage */
include <stdio.h>
nt main(){
   int date;
   printf("Enter date (1-31): ");
   scanf("%i", &date);
   if(date > 0 && date <= 31){
       int a = date % 10;
       int b = date / 10;
       int c = a + b;
       switch(c){
           case 1:
           printf("\nLucky\n");
           break;
   
           case 2:
           printf("\nCarefully do your work\n");
           break;
   
           case 3:
           printf("\nStorger\n");
           break;
   
           case 4:
           printf("\nHappy\n");
           break;
   
           case 5:
           printf("\nCan get help\n");
           break;
   
           case 6:
           printf("\nDoubt\n");
           break;
   
           case 7:
           printf("\nSad\n");
           break;
   
           case 8:
           printf("\nLike\n");
           break;
   
           case 9:
           printf("\nCourage\n");
           break;
   
           default:
           printf("\nOther\n");
       }
   } else {
       printf("\nEnter a date between (1-31)");
   }
   return 0;
}
------------------------
5.c
/fibonacci series
include <stdio.h>
nt main() {
   int n, a = 0, b = 1, next = 0;
   printf("Enter a number: ");
   scanf("%d", &n);
   printf("Fibonacci series up to %d:\n", n);
   while (a <= n) {
       printf("%d ", a);
       next = a + b;
       a = b;
       b = next;
   }
   return 0;
}
------------------------
6.c
/Factorial series
include <stdio.h>
nt main(){
   int number;
   int factorial = 1;
   printf("\nEnter a positive number: ");
   scanf("%d", &number);
   if(number > 0){
       for(int a = 1; a <= number; a++){
           factorial = factorial * a;
       } 
       printf("Factorial of %d is %d \n", number, factorial);
   } else {
       printf("\nEntered number is negative\n");
   }
    
   return 0;
}
7)
rite a c program that:
ccept 2 strings as input from the user.Concatenates the two strings Display the concatenated result.
include <stdio.h>
include <string.h>  // Required for strcat()
nt main() {
   char str1[100], str2[100];  // Arrays to store input strings
   // Getting user input
   printf("Enter the first string: ");
   scanf("%s", str1);
   printf("Enter the second string: ");
   scanf("%s", str2);
   // Concatenating strings
   strcat(str1, str2);
   // Displaying result
   printf("Concatenated string: %s\n", str1);
   return 0;
}
8)
rite a c programme that takes  a binary number ( as an input) as  input and convert it to its decimal equivalent.
include <stdio.h>
nt binaryToDecimal(int binary) {
   int decimal = 0, base = 1, remainder;
   while (binary > 0) {
       remainder = binary % 10;
       decimal += remainder * base;
       binary /= 10;
       base *= 2;
   }
   return decimal;
}
nt main() {
   int binary;
   // Asking for user input
   printf("Enter a binary number: ");
   scanf("%d", &binary);
   // Converting binary to decimal
   int decimal = binaryToDecimal(binary);
   // Displaying result
   printf("Binary: %d\n", binary);
   printf("Decimal: %d\n", decimal);
   return 0;
}
9)
rite a C programme that:
ccepts an array of integer from the user .Find and displays the maximum values in the array
include <stdio.h>
nt main() {
   int n, i, max;
   // Asking for user input
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   int arr[n]; // Array to store numbers
   // Getting array elements from user
   printf("Enter %d numbers: ", n);
   for (i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
   // Initializing max with the first element
   max = arr[0];
   // Finding the maximum value
   for (i = 1; i < n; i++) {
       if (arr[i] > max) {
           max = arr[i];
       }
   }
   // Displaying the maximum value
   printf("The maximum value in the array is: %d\n", max);
   return 0;
}
10)
 programme to generate Parsal's trangle
utput:
o of rows = 5
 		
include <stdio.h>
nt main() {
   int rows, coef = 1, space, i, j;
   // Asking for user input
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   // Generating Pascal's Triangle
   for (i = 0; i < rows; i++) {
       // Printing spaces for formatting
       for (space = 1; space <= rows - i; space++)
           printf("  ");
       // Calculating and printing values
       for (j = 0; j <= i; j++) {
           if (j == 0 || i == 0)
               coef = 1;
           else
               coef = coef * (i - j + 1) / j;
           printf("%4d", coef);
       }
       printf("\n");
   }
   return 0;
}