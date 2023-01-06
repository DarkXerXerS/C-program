#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// LOOPS IN C
// WHILE LOOP

int main() {

    int guess;
    int tries = 0;

    printf("AM THINKING OF A NUMBER BETWEEN 1 - 10 \n");
    printf("TRY GUESSING IT\n");
    scanf("%d", &guess);

    while (guess != 8 && tries < 50)
    {
        printf("You got it wrong\n");
        printf("TRY agin\n");
        scanf("%d", &guess);

        tries++;
    }
    
    if (guess == 8)
    {
        printf("YOU GOT IT RIGHT\n");
    }
    

}