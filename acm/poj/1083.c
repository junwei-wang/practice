/*
 * Filename:      1083.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-03-17 12:57
 * Description:   Greedy algorithm, 经过最频繁的门口的次数
 *                决定了时间
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX	400

void swap(int *, int *);

int main(void)
{
	int	num, lines, j, k, m, n, max_times;
	int	a, b;
	int	pass_times[MAX/2 + 1];

	scanf("%d", &num);
	while (num--) {
		for (k=0; k<MAX/2+1; k++)
			pass_times[k] = 0;
		scanf("%d", &lines);
		for (j=0; j<lines; j++) {
			scanf("%d %d", &a, &b);
			if (a > b)
				swap(&a, &b);

			for (m=(a+1)/2; m<=(b+1)/2; m++)
				pass_times[m]++;
		}

		max_times = 0;
		for (n=1; n<MAX/2+1; n++) {
			if (pass_times[n] > max_times)
				max_times = pass_times[n];
		}
		printf("%d\n", max_times*10);
	}

	exit(0);
}

void swap(int *a, int *b) 
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
