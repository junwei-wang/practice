/*
 * Filename:      1567.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 15:53
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char str[1001];

int main(void)
{
	int i = 0;
	char c;

	while (scanf("%c", &c) != EOF) 
		if (c == 'a' || c == 'd' || c=='g' || c=='j' || c=='m' || c=='p' ||
			c == 's' || c == 'v' || c=='y' || c=='.' || c==' ')
			i++;
		else if (c == 'b' || c == 'e' || c=='h' || c=='k' || c=='n' || c=='q' 
			  || c == 't' || c == 'w' || c=='z' || c==',')
			i += 2;
		else if (c == 'c' || c == 'f' || c=='i' || c=='l' || c=='o' || c=='r' 
			  || c == 'u' || c == 'x' || c=='!')
			i += 3; 

	printf("%d\n", i);
}

