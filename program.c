#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// LOOPS IN C
// WHILE LOOP

int main()
{
   char name[25];

   printf("\n WHAT YOUR NAME?: ");
   fgets(name, 25, stdin);
   name[strlen(name) - 1] = '\0';


   while(strlen(name) == 0)
   {
    printf("\n You did not enter your name ");
    printf("\nWhat is your name?:  ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

   }

//    printf("Hello %s", name);

    return 0;
}