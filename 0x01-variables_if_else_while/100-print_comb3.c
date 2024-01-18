#include<stdio.h>

/**
 * Main - Entry point of the program
 *
 * Return: is always a zero unless otherwise
 *
 */

int main(void)
{
char num1;
char num2;

for (num1 = '0'; num1 <= '8'; num1++)
{
for (num2 = num1; num2 <= '9'; ++num2)
{
num2 = num2 + 1;
if (num2 != num1)
{
putchar(num1);
putchar(num2);
putchar(',');
putchar(' ');

}
}
}
}
