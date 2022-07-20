/*
 * File: 6-is_prime_number.c
 * Auth: Amili  H
 * Task: Writing a function that returns 1 if the input integer is a prime number, otherwise return 0.
 */
 
#include "main.h"

int is_prime(unsigned int x, unsigned int y);
int is_prime_number(int n);

/**
 * is_prime - detects if an input number is a prime number.
 * @x: input number.
 * @y: iterator.
 * Return: 1 if x is a prime number. 0 if x is not a prime number.
 */
int is_prime(unsigned int x, unsigned int y)
{
	if (x % y == 0)
	{
		if (x == y)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(x, y + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
