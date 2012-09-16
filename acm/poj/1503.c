/*
 * Filename:      1503.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-03-18 14:02
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse_str(char *);
void compute(char *, int, int);

int main(void)
{
	char	str[105], res[105], *tmp;
	int	len, i;

	for (i=0; i<105; i++)
		res[i] = '0';
	res[104] = '\0';
	while (scanf("%s", str) && !(str[0] == '0' && str[1] =='\0')) {
		len = reverse_str(str);
		for (i=0; i<len; i++) {
			compute(res, i, str[i] - '0');
		}
	}

	reverse_str(res);
	i = 0;
	while (res[i++] == '0');
	i--;
	for (; i<105; i++)
		printf("%c", res[i]);
	printf("\n");

	exit(0);
}

int reverse_str(char * str)
{
	int	len, i;
	char	tmp;
	
	len = strlen(str);
	i = len / 2;
	while (i--) {
		tmp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = tmp;
	}
	return len;
}

void compute(char * res, int pos, int n)
{
	int tmp;
	
	tmp = res[pos] - '0' + n;
	res[pos] = tmp % 10 + '0';
	if (tmp / 10)
		compute(res, pos+1, tmp/10);
}
