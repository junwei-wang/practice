/*
 * Filename:      1110.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-10-06 13:56
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>

int N, M, Y;
int i;
int num;
int cnt = 0;

int mod_pow(int x, int y, int M)
{
	int res = 1;

	while (y--) {
		res *= x;
		if (res >= M)
			res %= M;
	}

	return res;
}

int main(void)
{
	scanf("%d %d %d", &N, &M, &Y);

	for (i=1; i<M; i++) 
		if (mod_pow(i, N, M) == Y) {
			printf("%d ", i);
			cnt++;
		}

	if (cnt == 0)
		printf("-1");

	printf("\n");
}
