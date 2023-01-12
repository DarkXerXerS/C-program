#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// LOOPS IN C
// WHILE LOOP

int main() {

    int learning = 1;
    int cont; 


    while(learning++ < 10) {
        printf("Congratulations are you ready to move to the next leson\n");
        printf("1 - YES\t2 - NO\n");

        scanf("%d", &cont);

        if (cont == 1) {
            printf("YOU ARE AREADY TO MOVE TO THE NEXT LESSON\n");
            break;
        } else if ( cont ==2)
        {
            printf("continue with the present lesson\n");
        } else {
            printf("INVALID INPUT");
        }
        

    }
}