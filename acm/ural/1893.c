/*
 * Filename:      1893.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 17:42
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
char c;

int main(void)
{
	scanf("%c", &c);
	n = c - '0';

	scanf("%c", &c);
	if (c >= '0' && c<= '9') {
		n = n * 10 + c - '0';
		scanf("%c", &c);
	}
	
	if (c == 'A' || c == 'K')
		printf("window\n");
	else if (n == 1 || n == 2) {
		if (c == 'D')
			printf("window\n");
		else 
			printf("aisle\n");

	}
	else if (n <= 20) {
		if (c == 'F') 
			printf("window\n");
		else
			printf("aisle\n");
	} else {
		if (c == 'C' || c=='D' || c == 'G' || c == 'H')
			printf("aisle\n");
		else
			printf("neither\n");
	}

}

