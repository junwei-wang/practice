/*
 * Filename:      1496.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 16:55
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
char str[100][32];
int i;

// 使用qsort
// cmp = 0, if x == y
// cmp < 0, if x < y, 1 < 2
// cmp > 0, if x > y, 2 < 1


int cmp(const void * x, const void * y)\
{
	return strcmp((char *)x, (char*)y);
}

int main(void)
{
	scanf("%d", &n);
	getchar();
	
	for (i=0; i<n; i++) 
		gets(str[i]);

	qsort(str, n, sizeof(char) * 32, cmp);

	for (i=0; i<n-1; i++)
		if (cmp(&str[i], &str[i+1]) == 0) {
			printf("%s\n", str[i]);
			i++;
			while (cmp(&str[i], &str[i+1]) == 0)
				i++;
		}
}
