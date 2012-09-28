/*
 * Filename:      1581.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 12:02
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;
int i;
int a[1000];
int cur, prv;
int cnt;

int main(void)
{
	scanf("%d", &N);

	for (i=0; i<N; i++) 
		scanf("%d", &a[i]);
	
	cur = a[0];
	cnt = 1;
	for (i=1; i<N; i++) {
		if (a[i] == cur) {
			cnt++;
		} else {
			printf("%d %d ", cnt, cur);
			cur = a[i];
			cnt = 1;
		}
	}

	printf("%d %d\n", cnt, cur);
}

