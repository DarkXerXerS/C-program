#include <stdio.h>
#include <stdbool.h>

// OUTPUT & PRINTF FUNCTION
int main()
{

    float temp = 25;
    bool sunny = 0;

    if(temp >= 0 && temp <= 30 && sunny)
    {
        printf("\n The weather is good!");
    } else {
        printf("\n The waether is bad! ");
    }
    return 0;
}