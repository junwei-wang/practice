/*
 * Filename:      2262.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-03-18 12:03
 * Description:   TODO unsolved
 *
 */
#include <stdio.h>
#include <stdlib.h>

int is_prime(const int);

int main(void)
{
	int i, num_in;

	while (scanf("%d", &num_in) && num_in != 0) {
		for (i=3; i<=num_in/2; i+=2) {
			if (is_prime(i) && is_prime(num_in-i)) {
				printf("%d = %d + %d\n", num_in, i, num_in-i);
				break;
			} 
		}
		
	}

	exit(0);
}

int is_prime(const int n) 
{
	int	i;

	for (i=2; i*i<=n; i++) {
		if (n%i == 0)	
			return 0;
	}
	return 1;
}
