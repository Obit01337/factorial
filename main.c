// TASK:
// Enter the value n and calculate n!

#include <stdio.h>
#include <stdlib.h>

int check_correct_input(void);
int factorial(int num);
int LucikEdition(int num);

int main(void)
{
    // Input number
    puts("Enter your number to count (less than 13)");
    int num = check_correct_input();
    printf_s("%d! = %d\n", num, factorial(num));
    printf_s("%d! = %d\n", num, LucikEdition(num));
    system("pause");
    return 0;
}

// Function for correct input
int check_correct_input(void)
{
    int num;
    char enter;
    do
    {
        rewind(stdin);
        puts("Input");
    }while (!(scanf_s("%d%c", &num, &enter)) || enter != '\n' || num < 0 || num > 12);
    return num;
}

// My algorithm for calculating the factorial
int factorial(int num)
{
    if (num == 0) return 1;
    factorial(num - 1);
    static int res = 1;
    res *= num;
    return res;
}

// Copy of Lucik function
int LucikEdition(int num)
{
   return num ? num * LucikEdition(num - 1) : 1;
}

