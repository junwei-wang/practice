/*
 * Filename:      2159.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-03-17 09:35
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX	101

int main(void)
{
	char	a[MAX], b[MAX];
	int	arr1[26] = {0}, arr2[26] = {0};
	int	len, i, j;

	scanf("%s", a);
	scanf("%s", b);

	len = strlen(a);
	for (i =0; i<len; i++) {
		arr1[a[i]-'A']++;
		arr2[b[i]-'A']++;
	}

	for (i=0; i<26; i++) {
		for (j=0; j<26; j++) {
			if (arr1[i] == arr2[j]) {
				arr2[j] = 0;
				break;
			}
		}
		if (j == 26) {
			printf("NO\n");
			exit(0);
		}
	}

	if (i == 26)
		printf("YES\n");
	
	exit(0);
}
