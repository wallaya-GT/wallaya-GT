#include <stdio.h>

int	calculator(int a, int b, char operator)
{

	int result;

	if( operator == '+' )
	result = a + b;
	if( operator == '-' )
	result = a - b;
	if( operator == '*' )
	result = a * b;
	if( operator == '%' )
	result = a % b;

	return (result);
}

int main()
{
	int num1;
	int num2;
	int result;

	num1 = 10;
	num2 = 2;

	result = calculator(num1, num2, '+');
	printf("%d\n", result);
	return (0);
}
 

// a mini calculator to handle basic calculations 