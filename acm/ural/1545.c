/*
 * Filename:      1545.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 16:01
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char str[1000][3];
int n;
char c;
int i;

int main(void)
{
	scanf("%d", &n);
	getchar();

	for (i=0; i<n; i++)
		gets(str[i]);
	
	scanf("%c", &c);

	for (i=0; i<n; i++)
		if (str[i][0] == c)
			printf("%s\n", str[i]);
}

