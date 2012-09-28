/*
 * Filename:      1493.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 12:35
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;

int sum(int x)
{
	return x / 100 + (x % 100) / 10 + x % 10;
}

int is_lucky(int x)
{
	return sum(x / 1000) == sum(x % 1000);
}

int main(void)
{
	scanf("%d", &n);

	if (is_lucky(n + 1) || is_lucky(n - 1))
		printf("Yes\n");
	else 
		printf("No\n");
}

