/*
 * Filename:      1079.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-26 15:58
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long a[100001];
long max[100001];
long i; 
long n;

long compute(long num)
{
	if (num % 2 == 0)
		return a[num / 2];
	return a[num / 2] + a[num / 2 + 1];
}

int main(void)
{
	a[0] = 0;
	a[1] = 1;

	max[0] = 0;
	max[1] = 1;

	for (i=2; i<=99999; i++) {
		a[i] = compute(i);

		if (a[i] > max[i-1])
			max[i] = a[i];
		else 
			max[i] = max[i-1];
	}

	scanf("%ld", &n);
	if (n == 0)
		exit(0);
	do {
		printf("%ld\n", max[n]);	
		scanf("%ld", &n);
	} while (n);
}

