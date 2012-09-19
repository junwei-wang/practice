/*
 * Filename:      1068.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-16 21:01
 * Description:
 *
 */
#include <stdio.h>

int main(void)
{
	long int a;
	scanf("%ld", &a);

	if (a > 0)
		printf("%ld\n", a * (a+1) / 2);
	else 
		printf("%ld\n", -a * (a-1) / 2 + 1);
}

