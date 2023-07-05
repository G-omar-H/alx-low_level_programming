#include "main.h"
/**
 * is_prime_number - look if prime
 * @n: takes input from another function
 * @nn: check for prime
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int nn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check if prime
 * @n: same n
 * @nn: check for prime
 * Return: 1 or 0
 */
int check_prime(int n, int nn)
{
	if (nn >= n && nn > 1)
		return (1);
	else if (n % nn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, nn + 1));
}
