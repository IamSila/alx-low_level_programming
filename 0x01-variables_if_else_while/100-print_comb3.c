#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: is always a zero unless otherwise
 *
*/

int main(void)
{
int num1;
int num2;

for (num1 = '0'; num1 <= '9'; num1++)
{
for (num2 = '1'; num2 <= '9'; num2++)
{
if (num1 < num2)
{
putchar(num1);
putchar(num2);
if ((num2 < '9') | (num1 < '8'))
{
putchar(',');
putchar(' ');
}
}
}

}

putchar('\n');
return (0);
}
