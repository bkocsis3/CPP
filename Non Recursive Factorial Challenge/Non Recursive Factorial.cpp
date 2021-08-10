#include <cstdio>

int factorial(int x) {
	int y = 1;	
	for (x; x > 0; --x)
	{
		y = y * x;
	}
	return y;
}

int main()
{
	int x = 7;
	printf("Factorial of %d is %d\n", x, factorial(x));
	return 0;
}