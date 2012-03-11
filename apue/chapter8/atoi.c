/*
 * Filename:      atoi.c
 * Author:        Junwei Wang(wakmecn@gmail.com)
 * Last Modified: 2012-02-28 22:48
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>

int my_atoi(const char *);
int main(void)
{
	char	*string = "123456";

	printf("%d\n", my_atoi(string));
	exit(0);
}

int my_atoi(const char *str)
{
	int	res;

	res = 0;
	while (*str != '\0') {
		res *= 10;
		res += *str - '0';
		*str++;
	}

	return res;
}
