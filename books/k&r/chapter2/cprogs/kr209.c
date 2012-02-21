/**
In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in
x . Explain why. Use this observation to write a faster version of bitcount.
**/


#include<stdio.h>

int bitcount(unsigned x);

int main(void)
{
	printf("%d",bitcount((unsigned)12));
}

int bitcount(unsigned x)
{
	int b;

	for(b=0; x!=0; x &= x-1)
		++b;

	return b;
}

/* Explaination.

- if x is 10 , then x-1 is 01.
- x & x-1 always sets the rightmost 1 bit to zero.
	for eg x & x-1 " 10 & 01 = 00, sets the rightmost 1 bit x to 0.
- We iterate this in a loop and find the number of 1 bits in x
- this is faster than ordinary bit count,coz we need not shift for each bit,but every 
right most 1 bit is accounted and result obtained.

*/
