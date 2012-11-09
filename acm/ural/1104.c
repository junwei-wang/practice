/*
 * Filename:      1104.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-10-20 12:45
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min_base = 2;
int num = 0;
char chars[1000001];
int i, j, len = 0;
int tmp;

int char_to_int(const char c)
{
	if (c >= '0' && c<='9')
		return (c - '0');
	else 
		return (c - 'A' + 10);
}

int main(void)
{
	scanf("%s", chars);
	len = strlen(chars);

	for (i=0; i<len; i++) {
		 tmp = char_to_int(chars[i]);
		 num += tmp;

		 if (tmp + 1 > min_base)
			 min_base = tmp + 1;
	}

	if (min_base == 2) {
		printf("2\n");
		exit(0);
	}

	for (j = min_base; j<=36; j++) {
		if (num % (j - 1) == 0) {
			printf("%d\n", j);
			exit(0);
		}
	}

	printf("No solution.\n");
}
