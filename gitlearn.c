/* gitlearn.c */
#include <stdio.h>

/*
 * substract function
 */
int substract(unsigned int a, unsigned int b)
{
	return (a - b);
}

/*
 * main function
 *
 */
int main(void)
{
	unsigned int i, j;

	i = 2;
	j = 3;
	printf("i + j = %d\n", i+j);

	printf("i * j = %d\n", i*j);

	/* Let's add more comment here */
	/* This is a special mod in master only */
	/* dev branch commit 8 */
	/* dev branch commit 7 */
	return 0;
}
