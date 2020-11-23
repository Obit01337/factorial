//TASK:
// Enter the value n and calculate n!

#include <stdio.h>

int check();
int factorial(int number);
int LucikEdition(int number);

int main()
{
    // Input number
    puts("Enter your number to count");
    int number = check();
    printf_s("%d! = %d\n", number, factorial(number));
    printf_s("%d! = %d\n", number, LucikEdition(number));
    getchar();
    return 0;
}

// Function for correct input
int check()
{
    int number;
    char check;
    do
    {
        rewind(stdin);
        puts("Input\t");
    }while ( !(scanf_s("%d%c", &number, &check)) || check != '\n' || number < 0);
    return number;
}

// My algorithm for calculating the factorial
int factorial(int number)
{
    if (number == 0) return 1;
    else factorial(number-1);
    static int result = 1;
    result *= number;
    return result;
}

// Copy of Lucik function
int LucikEdition(int number)
{
   return number?number*LucikEdition(number-1):1;
}

