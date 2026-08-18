#include <stdio.h>

char *ones[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
                "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", 
                "nineteen" };

char *tens[] = { "", "", "twenty", "thirty", "forty",
	            "fifty", "sixty", "seventy", "eighty", "ninety" };

void	print_under_100(int n)
{
	if (n < 20)
		printf("%s", ones[n]);
	else
	{
		printf("%s", tens[n / 10]);
		if (n % 10 != 0)
			printf(" %s", ones[n % 10]);
	}
}

void	print_under_1000(int n)
{
	if (n >= 100)
	{
		printf("%s hundred", ones[n / 100]);

		if (n % 100 != 0)
			printf(" ");

		n = n % 100;
	}
	if (n > 0)

		print_under_100(n);
}

void	print_number(int n)
{
	if (n >= 1000)
	{
		print_under_1000(n / 1000);
		printf(" thousand");

		if (n % 1000 != 0)
			printf(" ");

		n = n % 1000;
	}

	if (n > 0)
		print_under_1000(n);
	else if (n == 0)
		printf("zero");
}

int	main(void)
{
	int	n;

	n = 1234;
	print_number(n);
	return (0);
}
