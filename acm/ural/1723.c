/*
 * Filename:      1723.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 22:45
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char c;
int a[26];
char s[155];
int i;
int max = 0;

int main(void)
{

	gets(s);

	for (i=0; i<150 && s[i] != '\000'; i++)
		a[s[i]-'a']++;

	for (i=0; i<26; i++)
		if (a[i] > max) {
			max = a[i];
			c = i + 'a';
		}
	
	printf("%c\n", c);
}

