#include <cstdio>

template <typename T>
T factorial(T x) {
	T y = 1;
	for (x; x > 0; --x)
	{
		y *= x;
	}
	return y;
}

int main()
{
	int i = 3;
	long long unsigned int llui = 4;
	long double ld = 25;
	printf("Factorial of %d is %d\n", i, factorial(i));
	printf("Factorial of %lld is %lld\n", llui, factorial(llui));
	printf("Factorial of %.3Lf is %-4.10Lg\n", ld, factorial(ld));

	return 0;
}