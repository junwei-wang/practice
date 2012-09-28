/*
 * Filename:      1787.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 11:53
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int k, n;
int i;
int num, in_jam;

int main(void)
{
	in_jam = 0;
	scanf("%d %d", &k, &n);

	for (i=0; i<n; i++) {
		scanf("%d", &num);
		if (in_jam + num <= k)
			in_jam = 0;
		else 
			in_jam = in_jam + num - k;
	}
	
	printf("%d\n", in_jam);
}

