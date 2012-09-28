/*
 * Filename:      1585.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 15:39
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a = 0, b = 0, c = 0;
int n;
int i;
char str[50];

int main(void)
{
	scanf("%d\n", &n);
	
	for (i=0; i<n; i++) {
		gets(str);
		if (str[0] == 'M')
			a++;
		else if (str[0] == 'E')
			b++;
		else
			c++;
	}

	if (a >= b) {
		if (a >= c)
			printf("Macaroni Penguin\n");
		else 
			printf("Little Penguin\n");
	} else {
		if (b >= c)
			printf("Emperor Penguin\n");
		else 
			printf("Little Penguin\n");
	}
}

