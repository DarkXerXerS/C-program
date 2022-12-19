#include <stdio.h>
#include <stdbool.h>

// FUNCTION IN C 
double square(double x)
{
    double result = x * x;
    return result;
}


int main ()
{
 double x = square(2.00);
 printf("%.2lf", x);

 return 0;
}