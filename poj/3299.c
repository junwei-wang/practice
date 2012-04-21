/*
 * Filename:      2000.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-03-17 08:35
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void comp_h(double, double);
void comp_d(double, double);
void comp_t(double, double);

#define mye		2.718281828
#define myexp(x)	pow(mye, x)
#define mylog(x)	log(x)/log(mye)

int main(void)
{
	double	num1, num2;
	char	char1, char2;
	while (scanf("%c", &char1) && char1 != 'E') {
		getchar();	// clear the buffer
		scanf("%lf %c %lf", &num1, &char2, &num2);
		getchar();	// clear the buffer
		if (char1 == 'T' && char2 == 'D')
			comp_h(num1, num2);
		else if (char1 == 'D' && char2 == 'T')
			comp_h(num2, num1);
		else if (char1 == 'T' && char2 == 'H')
			comp_d(num1, num2);
		else if (char1 == 'H' && char2 == 'T')
			comp_d(num2, num1);
		else if (char1 == 'D' && char2 == 'H')
			comp_t(num1, num2);
		else 
			comp_t(num2, num1);
		//fflush(stdin);
	}
	exit(0);
}

void comp_h(double t, double d)
{
	double	e, h;

	e = 6.11 * myexp(5417.7530*(1/273.16 - 1/(d+273.16)));
	h = t + 0.5555 * (e-10.0);

	printf("T %0.1f D %0.1f H %0.1f\n", t, d, h);
}


void comp_d(double t, double h)
{
	double	tmp, d;

	tmp = ((h-t)/0.5555 + 10) / 6.11;
	d = 1/(1/273.16 - mylog(tmp)/5417.7530) - 273.16;

	printf("T %0.1f D %0.1f H %0.1f\n", t, d, h);
}

void comp_t(double d, double h)
{
	double	e, t;

	e = 6.11 * myexp(5417.7530*(1/273.16 - 1/(d+273.16)));
	t = h - 0.5555 * (e-10);

	printf("T %0.1f D %0.1f H %0.1f\n", t, d, h);
}
