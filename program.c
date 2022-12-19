#include <stdio.h>
#include <stdbool.h>

// FUNCTION IN C 

void birthday(char X[], int Y)
{
    printf("\n Happy birthday dear %s!", X);
    printf("\n You are %d years old!", Y);

}

int main()
{
char name[] = "XerXerS_d_coder";
int age = 18;


birthday(name, age);

return 0; 
}