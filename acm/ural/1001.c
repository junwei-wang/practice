/*
 * Filename:      1001.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-16 11:45
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXSIZE 256 * 1024

void push(long long int i);
long long int pop(void);

long long int *top, *cur, stack[MAXSIZE];

int main(void)
{
	long long int i;

	top = stack;
	cur = stack;

	while (scanf("%lld", &i) != EOF) 
		push(i);
	while(printf("%.4f\n", sqrt(pop())))
		;
}

void push(long long int i)
{
	cur++;
	*cur = i;
}

long long int pop(void)
{
	if (cur == top)
		exit(0);
	
	cur--;
	return *(cur + 1);
}
