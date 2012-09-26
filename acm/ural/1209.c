/*
 * Filename:      1209.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-26 12:40
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;
long long k, tmp;
int i = 0;

int main(void)
{
	scanf("%d", &N);	
	for (i=0; i<N; i++){
		scanf("%lld", &k);

		tmp = (long long)sqrt(2*k-2);

		if (tmp * (tmp + 1) == 2*k - 2) 
			printf("1 ");
		else 
			printf("0 ");
	}

	printf("\n");
}

