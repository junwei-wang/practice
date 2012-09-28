/*
 * Filename:      1636.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 12:22
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int t1, t2;
int tmp, sum = 0;
int i;

int main(void)
{
	scanf("%d %d", &t1, &t2);

	for (i=0; i<10; i++) {
		scanf("%d", &tmp);
		sum += tmp;
	}

	if (sum * 20 + t1 <= t2)
		printf("No chance.\n");
	else 
		printf("Dirty debug :(\n");
		
}

