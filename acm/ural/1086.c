/*
 * Filename:      1086.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-10-20 12:58
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[15002];
int i, j;
int num = 101;
int sqrt_n;
int N, k;

int is_prime()
{
	sqrt_n = sqrt(num);

	for (j=0; a[j]<=sqrt_n; j++)
		if (num % a[j] == 0) {
			num += 2;
			return 0;
		}
	return 1;
}

int main(void)
{
	a[0] = 2;
	a[1] = 3;
	a[2] = 5;
	a[3] = 7;
	a[4] = 11;
	a[5] = 13;
	a[6] = 17;
	a[7] = 19;
	a[8] = 23;
	a[9] = 29;
	a[10] = 31;
	a[11] = 37;
	a[12] = 41;
	a[13] = 43;
	a[14] = 47;
	a[15] = 53;
	a[16] = 59;
	a[17] = 61;
	a[18] = 67;
	a[19] = 71;
	a[20] = 73;
	a[21] = 79;
	a[22] = 83;
	a[23] = 89;
	a[24] = 97;

	for (i=25; i<15000; i++) {
		while(!is_prime(num))
			;

		a[i] = num;
		num += 2;;
	}

	scanf("%d", &N);
	for (i=0; i<N; i++) {
		scanf("%d", &k);
		printf("%d\n", a[k-1]);
	}
}

