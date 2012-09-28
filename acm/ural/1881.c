/*
 * Filename:      1881.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 18:13
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int h, w, n;
char s[105];
int cur = 0;
int cnt = 0;
int len;
int i;

int main(void)
{
	scanf("%d %d %d", &h, &w, &n);

	scanf("%s", s);
	cur = strlen(s);
	for (i=1; i<n; i++) {
		scanf("%s", s);
		len = strlen(s);

		if (cur + len + 1 <= w) 
			cur += len + 1;
		else {
			cnt++;
			cur = len;
		}
	}

	cnt++;

	if (cnt % h == 0)
		printf("%d\n", cnt / h);
	else
		printf("%d\n", cnt / h + 1);
}

