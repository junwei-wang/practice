/*
 * Filename:      1044.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-26 08:35
 * Description:
 *
 */

/*
 * Filename:      1044.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-26 08:35
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[37], b[37];

int main(void)
{
	int m, n, i = 9, j;
	int sum = 0;
	int tmp, tmp1 = 0;

	scanf("%d", &n);

	m = n / 2;
	while (--m) 
		i = i*10 + 9;
	
	m = n / 2;
	while (i--) {
		tmp = i + 1;
		while (m--) {
			tmp1 += tmp / (int)pow(10, m);
			tmp %= (int)pow(10, m);
		}

		a[tmp1]++;
		m = n / 2;
		tmp1 = 0;
	}
	
	for (j=1; j<=n * 9 / 2; j++)
		sum += a[j] * a[j];
	
	printf("%d\n", sum + 1);
}
