/*
Author: KONYANA M.L
Date: October 2022
*/

#include <stdio.h>
#include <math.h>

int reverse(int n) 	// a function that reverses a number
{
	int  reverse = 0, remainder;
	while(n != 0)	
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n = n / 10;
	}
 	return reverse;
}
int prime_number(int n)
{

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return 0; // return false
		}
	}
	return 1;	// return true(number is prime)
}
void reversible_prime_squares()
{
	int num = 1;
	for(int count = 0; count < 10; num++)	// count 10 reversible prime squares
	{

		if(prime_number(num) == 1)
		{
			int square = num*num;	//num squared
			int reversed = reverse(square);	// reverse the square
			if(square != reversed)	// check if not palindrome
			{
				for(int i = 0; i < reversed/2; i++)
				{
					if(i*i == reversed)	//palindrome
					{
						if(prime_number(i) == 1)
						{
							printf("\n%d",square);
							count ++;
						}
					}
				}
			}
		}
	}
}
int main()
{
 	printf ("REVERSIBLE PRIME SQUARES: ");
    reversible_prime_squares();

    return 1;
}
