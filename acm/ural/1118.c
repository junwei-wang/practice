/*
 * Filename:      1118.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-10-20 13:50
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[1000009] = {0};
int i, j;
int sqrt_n;
int N, k;
int I, J;
int tmp;
double min, tmp_d; 
int min_pos;

void set_prime(const int num)
{
	sqrt_n = sqrt(num);

	for (j=2; j<=sqrt_n; j++)
		if (a[j] && (num % j == 0)) 
			return;

	a[num] = 1;
}

double compute(const int num) {
	int sum = 0;
	int half_n = num / 2;

	for (j=1; j<=half_n; j++)
		if (num % j == 0) 
			sum += j;
//	printf("%d %d\n", num, sum);
	
	return sum*1.0/num;
}

int main(void)
{
	a[2] = 1;
	a[3] = 1;
	a[5] = 1;
	a[7] = 1;
	a[11] = 1;
	a[13] = 1;
	a[17] = 1;
	a[19] = 1;
	a[23] = 1;
	a[29] = 1;
	a[31] = 1;
	a[37] = 1;
	a[41] = 1;
	a[43] = 1;
	a[47] = 1;
	a[53] = 1;
	a[59] = 1;
	a[61] = 1;
	a[67] = 1;
	a[71] = 1;
	a[73] = 1;
	a[79] = 1;
	a[83] = 1;
	a[89] = 1;
	a[97] = 1;

	for (i=101; i<1000001; i++)
		set_prime(i);

	scanf("%d %d", &I, &J);

	if (I == 1) {
		printf("1\n");
		exit(0);
	}

	min = J;
	min_pos = J;

	if (J%2 == 0)
		J--;

	for (i = J; i>=I; i-= 2) {
		if (a[i]) {
			printf("%d\n", i);
			exit(0);
		}

		tmp_d = compute(i);
		if (min > tmp_d) {
			min = tmp_d;
			min_pos = i;
		}
	}

	printf("%d\n", min_pos);
}

