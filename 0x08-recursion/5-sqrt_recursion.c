#include "main.h"
/**
  * power_helper - helper function
  * @n: number to calculate the natural square root of
  * @guess: guess for the natural square root
  * Return: natural root or -1 if it does not exist
  */
int power_helper(int n, int guess)
{
	if (n % guess == 0)
	{
		if (guess * (n / guess) == n)
		{
			return (guess);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + power_helper(n, guess + 1));
}

/**
  * _sqrt_recursion - uses recursion to calculate a natural root.
  * @n: number
  * Return: natural square root or -1
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (power_helper(n, 2));
}
