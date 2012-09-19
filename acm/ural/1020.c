/*
 * Filename:      1020.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-18 20:53
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 不是求凸包,自然形成凸边行
// 自习观察后会发现，绕在圆周上的总长度是一个圆周。
//
#define PI 3.14159

double x[100], y[100];

int main(void)
{
	int N, i;
	double R, len = 0;

	scanf("%d %lf", &N, &R);

	scanf("%lf %lf", &x[0], &y[0]);
	for (i = 1; i < N; i++) {
		scanf("%lf %lf", &x[i], &y[i]);
		len += sqrt(pow((x[i] - x[i - 1]), 2) + pow((y[i] - y[i - 1]), 2));
	}

	len += sqrt(pow((x[N - 1] - x[0]), 2) + pow((y[0] - y[N - 1]), 2));
	len += 2 * PI * R;
	
	printf("%.2lf\n", len);
}

