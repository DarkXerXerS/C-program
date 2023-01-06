#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// LOOPS IN C
// WHILE LOOP

int main() {
    int pin = 0;
    int tries = 0;


    printf("BANK OF CODECADMY\n");
    printf("ENTER YOUR PIN:\n");
    scanf("%d", &pin);



    while (pin != 1234 && tries < 3)
    {
        printf("ENTER YOUR PIN\n");
        scanf("%d", &pin);
    }

    if (pin == 1234) {
        printf("PIN SUCCESSFUL\n");
        printf("ACCESS GRANTED\n");
    }
    
}