#include <stdio.h>
	// Check for number prime or not
	 int isPrime(int n)
	{

		// Check if number is less than
		// equal to 1
		if (n <= 1)
			return 0;

		// Check if number is 2
		else if (n == 2)
			return 1;

		// Check if n is a multiple of 2
		else if (n % 2 == 0)
			return 0;

		// If not, then just check the odds
		for (int i = 3; i*i <= (n); i += 2)
		{
			if (n % i == 0)
				return 0;
		}
		return 1;
	}

	// Driver code
	int main()
	{
		int n;
		printf("Enter the number to check for prime");
		scanf("%d", &n);
		if (isPrime(n))
		{
			printf("The number is prime");
		}
		else
		{
			printf("The number is not prime");
		}
	}
