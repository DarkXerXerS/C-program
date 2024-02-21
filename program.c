// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// // SIMPLE CONDITIONAL STATMENT ODE WITH  C 

// int main() {
//   // Create a number that’s 0 or 1
//   srand (time(NULL));
//   int coin = rand() % 2;

//   // If number is 0: Heads
//   // If it is not 0: Tails
//   if (coin == 0) {
//     printf("Heads\n");
//   } else {
//     printf("Tails\n");
//   }
// //  Created an array
//   int arr[] = {3, 4, 5, 9, 64, 86, 5, 75, 4, 5, 7,};
//   // LOOPING THROUGH THE ARRAY WITH A FOR LOOP
//   for (int i = 0; i < sizeof(arr); i++) {
//     printf("\n%d", arr[i]);
//   }
//   {
//     /* code */
//   }
  
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// int main () {
//   char operator;
//   int num1, num2, result;
//   printf("ENTER OPERATOR (+, -, *, /)");
//   scanf("%c", &operator);
//   printf("ENTER THE NUMBER");
//   scanf("%d%d", &num1, &num2);
//   if (operator == '+') {
//     result = num1 + num2;
//   } else if (operator == '-') {
//     result = num1 - num2;
//   } else if (operator == '*') {
//     result = num1 * num2;
//   } else if (operator == '/') {
//     result = num1 / num2;
//   }
  
//   return 1;
//}

// WRITE A C PROGRAM TO CHECK IF A NUMBER IS PRIME OR NOT
#include <stdio.h>
#include <stdbool.h>

bool isPrime (int number);

int main () {
   if (isPrime(6)) {
    printf("6 is Prime\n");
   } else {
    printf("6 is not Prime\n");
   }

     if (isPrime(4)) {
    printf("4 is Prime\n");
   } else {
    printf("4 is not Prime\n");
   }

     if (isPrime(7)) {
    printf("7 is Prime\n");
   } else {
    printf("7 is not Prime\n");
   }

//    for (int i = 2; i <= 1000; i++) {
//     if (isPrime(i)) {
//         printf("%d is prime \n", i);
//     } else {
//         printf("%d is not prime\n", i);
//     }
//    }

   // WRITE A  C PROGRAM TO FIND THE FATORIAL OF A NUMBER
   int num, count, fact = 1;
   

   printf("ENTER A NUMBER TO FIND IT FATORAIL\n");
   scanf("%d", &num);
  
  for (count = 1; count <= num; count++) {

    fact = fact * count;
  }

 printf("FACTORIAL of %d is %d\n", num, fact);


       return 0;
}

bool  isPrime(int number) {

    if (number <= 1) {
        return false;  // PRIME NUMBERS HAS TO BE GREATER THAN 1
    }
     for ( int i = 2; i < (number / 2); i++) { // CHECkS FROM 2 TO THE LAST NUMBER BEFORE THE NUMBER
       if (number % i == 0) { // 
        return false;
       } else {
        return true;
       }
     }
}


 