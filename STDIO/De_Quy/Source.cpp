#include <stdio.h>

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
	{
		return n* Factorial(n - 1);
	}
}

int Fibonaci(int n)
{
	if (n == 0)
		return 0;
	else
	{
		if (n == 1)
			return 1;
	}
	return Fibonaci(n - 1) + Fibonaci(n - 2);
}

int main()
{
	printf("%d", Fibonaci(8));
	while (true);
	return 0;
}