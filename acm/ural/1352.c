/*
 * Filename:      1352.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-10-20 14:38
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_mersenne_prime(const int n)
{
	switch (n) {
		case 1:
			printf("2\n");
			break;
		case 2:
			printf("3\n");
			break;
		case 3:
			printf("5\n");
			break;
		case 4:
			printf("7\n");
			break;
		case 5:
			printf("13\n");
			break;
		case 6:
			printf("17\n");
			break;
		case 7:
			printf("19\n");
			break;
		case 8:
			printf("31\n");
			break;
		case 9:
			printf("61\n");
			break;
		case 10:
			printf("89\n");
			break;
		case 11:
			printf("107\n");
			break;
		case 12:
			printf("127\n");
			break;
		case 13:
			printf("521\n");
			break;
		case 14:
			printf("607\n");
			break;
		case 15:
			printf("1279\n");
			break;
		case 16:
			printf("2203\n");
			break;
		case 17:
			printf("2281\n");
			break;
		case 18:
			printf("3217\n");
			break;
		case 19:
			printf("4253\n");
			break;
		case 20:
			printf("4423\n");
			break;
		case 21:
			printf("9689\n");
			break;
		case 22:
			printf("9941\n");
			break;
		case 23:
			printf("11213\n");
			break;
		case 24:
			printf("19937\n");
			break;
		case 25:
			printf("21701\n");
			break;
		case 26:
			printf("23209\n");
			break;
		case 27:
			printf("44497\n");
			break;
		case 28:
			printf("86243\n");
			break;
		case 29:
			printf("110503\n");
			break;
		case 30:
			printf("132049\n");
			break;
		case 31:
			printf("216091\n");
			break;
		case 32:
			printf("756839\n");
			break;
		case 33:
			printf("859433\n");
			break;
		case 34:
			printf("1257787\n");
			break;
		case 35:
			printf("1398269\n");
			break;
		case 36:
			printf("2976221\n");
			break;
		case 37:
			printf("3021377\n");
			break;
		case 38:
			printf("6972593\n");
			break;
	}
}

int main(void)
{
	int T, N;
	scanf("%d", &T);

	while (T--) {
		scanf("%d", &N);
		print_mersenne_prime(N);
	}
}
