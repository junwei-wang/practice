/*
 * Filename:      1197.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-18 13:47
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int n;
	char c1, c2;

	scanf("%d", &n);

	while (n--) {
		getchar();
		scanf("%c", &c1);
		scanf("%c", &c2);
		if (c1 == 'a' || c1 == 'h') {
			if (c2 == '1' || c2 == '8')
				printf("2\n");
			else if (c2 == '2' || c2 == '7')
				printf("3\n");
			else
				printf("4\n");
		} else if (c1 == 'b' || c1 == 'g') {
			if (c2 == '1' || c2 == '8')
				printf("3\n");
			else if (c2 == '2' || c2 == '7')
				printf("4\n");
			else
				printf("6\n");
		} else {
			if (c2 == '1' || c2 == '8')
				printf("4\n");
			else if (c2 == '2' || c2 == '7')
				printf("6\n");
			else
				printf("8\n");
		}
	}
}

