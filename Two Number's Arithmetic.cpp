// Two Number's Arithmetic
// Version 1.0.3

#include <stdio.h>
#include <conio.h>
int main()
{
// Welcome text section

    printf ("Welcome to Two Number's Arithmetic \n");
    printf ("Version 1.0.3\n");
    printf ("Build by Siddiq Sazzad\n");

// Note: \n is used for more space

    printf ("\n");

    printf ("-----------------------------------------------------------------------------------\n");


    float num1, num2;
    int x, y;
    printf("Enter your first number: ");
    scanf("%f", &num1);

    printf("Enter your last number: ");
    scanf ("%f", &num2);

//integer variable

    x= num1;
    y= num2;

    printf ("\n");
    printf("Plus result is %0.0f + %0.0f = %0.0f, (octal: %o)", num1, num2, num1+num2, x+y);  if ( num1 + num2 > 0) {

        printf("\t(positive)\n");
    }

    else if (num1 + num2 < 0) {
        printf ("\t(negative)\n");

    }
    else if (num1 + num2 ==0) {
        printf ("\t (non-negative)\n");
    }



    printf ("Minus result is %0.0f - %0.0f = %0.0f, (octal: %o)", num1, num2, num1-num2, x-y);  if ( num1 - num2 > 0) {

        printf("\t(positive)\n");
    }

    else if (num1 - num2 < 0)  {
        printf ("\t(negative)\n");

    }
    else if (num1 - num2 == 0) {

        printf ("\t(non-negative)\n");
    }

    printf ("Multiplication result is %0.0f x %0.0f = %0.0f, (octal: %o)", num1, num2, num1*num2, x*y);  if ( num1 * num2 > 0) {

        printf("\t(positive)\n");
    }

    else if (num1 * num2 < 0)  {
        printf ("\t(negative)\n");

    }
    else if (num1 * num2 == 0) {
        printf ("\t(non-negative)");
    }

    printf ("Division result is %0.0f / %0.0f = %0.2f, (octal: %o)", num1, num2, num1/num2, x/y);  if ( num1 / num2 > 0) {

        printf("\t(positive)\n");
    }

    else if (num1 / num2 < 0) {
        printf ("\t(negative)\n");

    }

    else if (num1 / num2 == 0) {
        printf ("\t(non-negative)");
    }

    printf ("\n");


printf ("-----------------------------------------------------------------------------------\n");

    printf("While,\n");




     if ( num1 > 0) {

        printf("The number 1 is positive (octal: %o)\n", x);
    }

    else {
        printf ("The number 1 is negative (octal: %o)\n", x);

    }

     if ( num2 > 0) {

        printf("The number 2 is positive (octal: %o)\n", y);
    }

    else {
        printf ("The number 2 is negative (octal: %o)", y);

    }

    getch ();
}


