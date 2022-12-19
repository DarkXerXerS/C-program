#include <stdio.h>
#include <math.h>
#include <ctype.h>

// OUTPUT & PRINTF FUNCTION
int main()
{

    //    const double PI = 3.14159;
    //     double radius;
    //     double circumference;
    //     double area;

    //     printf("\n ENter the radius of a circle:\n");
    //     scanf("%lf", &radius);
    //     circumference = 2 * PI * radius;
    //     printf("circumference: %lf", circumference);

    //     printf("\n ENter the area of a circle:\n");
    //     scanf("%lf", &area);

    //     area = PI * radius * radius;

    //     printf("area: %lf", area);

    //     double A;
    //     double B;
    //     double c;

    //     printf("Enter side A:\n");
    //     scanf("%lf",&A);

    //     printf("Enter side B:\n");
    //     scanf("%lf", &B);

    //     c = sqrt(A*A + B*B);

    //     printf("side c: %lf", c);

    // int age;
    //   char grade;

    // printf("\n ENTER your age: ");
    // scanf("%d", &age);

    // if (age >= 18)
    // {
    //     printf("YOU are signed in!\n");
    // }
    // else if (age < 0)
    // {
    //     printf("YOU havent been born yet");
    // }
    // else
    // {
    //     printf("YOU are to YOUNG to sign up!\n");
    // }

    // char grade;

    // printf("\n ENTER A LETTER GRADE:");
    // scanf("%c", &grade);

    // switch (grade)
    // {
    // case 'A':
    //     printf("prefect!\n");
    //     break;

    // case 'B':
    //     printf("You did good!\n");
    //     break;

    // case 'c':
    //     printf("Fair enought!\n");
    //     break;

    // case 'D':
    //     printf("AT least it not an F!\n");
    //     break;

    // case 'F':
    //     printf("You FAILED BRO!\n");
    //     break;

    // default:
    //     printf("ENTER ONLY VAILD GRADE\n");
    //     break;
    // }

    // char unit;
    // float temp;

    // printf("\n IS the temperature in (F) or (c)?:");
    // scanf("%c", &unit);

    // if(unit == 'c')
    // {
    //     printf("The temp is currently in c");
    // } else if( unit == 'F'){
    //     printf("The temp is currently in F");
    // }
    // else {
    //     printf("\n %c is not a VAild unit of measurmt", unit);
    // }

    char operator;
    double num1;
    double num2;
    double result;

    printf("\n Enter an operator (+ - * / )");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("ENter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;

          case '-':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;
        
          case '*':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;
        
          case '/':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;
        

        default:
        printf("%c is not valid", operator);
        break;
    }

    return 0;
}