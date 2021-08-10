#include <cstdio>

int primes_found = 0;
int primes_wanted = 25;
int check_number = 2;
int numbers_less_than;
bool prime = true;

void view_variables() {
	printf("Primes Found:%d Check Number:%d \n", primes_found, check_number); 
}

int main()
{
	while (primes_found < primes_wanted) //loop until desired number of primes are found
	{
		numbers_less_than = check_number - 1; //set numbers_less_than to one less than the current check_number

		for (numbers_less_than; numbers_less_than > 1; --numbers_less_than) //loop through all numbers less than the check number
		{
			if (check_number % numbers_less_than == 0) //see if the check number evenly divides by any less than number
			{
				prime = false; //set prime bool to false if the check number evenly divides
			}
		}

		if (prime == true) { //if prime bool is still true, inc primes found and view variables
			++primes_found;
			view_variables();
		}

		prime = true; //reset prime bool to true for next cycle
		++check_number; //inc check number for next cycle
	}
	return 0;
}