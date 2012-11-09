/*
 * Filename:      1263.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-10-06 13:45
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N, M, num;
int i;
int a[10005];

int main(void)
{
	scanf("%d %d", &N, &M);

	for (i=0; i<M; i++) {
		scanf("%d", &num);
		a[num]++;
	}


	for (i=1; i<=N; i++) 
		printf("%.2f%%\n", a[i]*100.0/M);
}

